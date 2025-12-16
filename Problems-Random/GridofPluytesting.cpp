/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Dec 10 2024 3:03:19 PM
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir() {
    ll n, m;
    cin >> n >> m;
    
    vector<vector<char>> grid(n + 2, vector<char>(m + 2, '.'));
    bool got = false;

    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            cin >> grid[i][j];
            if ( !got && grid[i][j] == '+') {
                got = true;
            }
        }
    }

    if (!got) {
        cout << 0 << endl;
        return;
    }

    ll mx = -1;
    ll pmx = (min(n, m) * 2) - 1;

    //prefix approach try 1
    vector<vector<ll>> rp(n+2,vector<ll>(m + 2, 0));
    vector<vector<ll>> colp(n+2,vector<ll>(m + 2, 0));

    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            rp[i][j] = rp[i][j - 1] + (grid[i][j] == '+' ? 1 : 0);
            colp[i][j] = colp[i - 1][j] + (grid[i][j] == '+' ? 1 : 0);
        }
    }

    for (ll i = 2; i < n; i++) {
        for (ll j = 2; j < m; j++) {
            if (grid[i][j] == '+') {
                ll c = 0;

                while (i - c >= 1 && i + c <= n &&
                       j - c >= 1 && j + c <= m &&
                       rp[i][j + c] - rp[i][j - c - 1] == (2 * c + 1) &&
                       colp[i + c][j] - colp[i - c - 1][j] == (2 * c + 1)) {
                    c++;
                }

                ll sz = (4*(c-1))+1;
                mx = max(mx, sz);

                if (mx == pmx) {
                    cout << mx << endl;
                    return;
                }
            }
        }
    }
    if (mx == -1) {
        cout << 1 << endl;
    } else {
        cout << mx << endl;
    }
}

int main() {
    ALLAHU_AKBAR

    ll t;
    cin >> t;
    while (t--) {
        sir();
    }
    return 0;
}
