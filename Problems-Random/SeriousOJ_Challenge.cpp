/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Dec 10 2024 3:03:19 PM
 */
//Sorry test case number cant be counted ;)!!
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir() {
    ll n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n + 1, vector<char>(m + 1));
    bool got = false;
    ll cp = 0;

    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '+') {
                got = true; cp++;
            }
        }
    }

    if (!got) {
        cout << 0 << endl;
        return;
    }
    ll pmx = (min(n, m) * 2) - 1;
    if(cp==(n*m) && n!=m){
        cout<<pmx<<endl;
        return;
    }
    if(cp==(n*m) && n==m && n%2==0){
        pmx = ((n-1)*2)-1;
        cout<<pmx<<endl;
        return;
    }
    if(cp==(n*m) && n==m && n%2==1){
        pmx = (n*2)-1;
        cout<<pmx<<endl;
        return;
    }
    vector<pair<ll, ll>> point;
    ll mx = -1;
    for (ll i = 2; i < n; i++) {
        for (ll j = 2; j < m; j++) {
            if (grid[i][j] == '+')
            {
                if(grid[i][j + 1] == '+' && grid[i][j - 1] == '+' &&
                    grid[i - 1][j] == '+' && grid[i + 1][j] == '+') 
                {
                    point.emplace_back(i, j);
                    ll f = i;
                    ll s = j;
                    ll c = 0;
                    ll x = 1;

                    while (f + x <= n && f - x >= 1 &&
                        s + x <= m && s - x >= 1 &&
                        grid[f + x][s] == '+' && grid[f - x][s] == '+' &&
                        grid[f][s + x] == '+' && grid[f][s - x] == '+') {
                        c++;
                        x++;
                    }

                    mx = max(mx, ((4 * c) + 1));
                    if (mx == pmx) {
                        cout << mx << endl;
                        return;
                        }

                }

            }
        }
    }

    if (point.empty()) {
        cout << 1 << endl;
        return;
    }
    cout << mx << endl;

    // for (auto &p : point) {
    //     ll f = p.first;
    //     ll s = p.second;
    //     ll c = 0;
    //     ll x = 1;

    //     while (f + x <= n && f - x >= 1 &&
    //            s + x <= m && s - x >= 1 &&
    //            grid[f + x][s] == '+' && grid[f - x][s] == '+' &&
    //            grid[f][s + x] == '+' && grid[f][s - x] == '+') {
    //         c++;
    //         x++;
    //     }

    //     mx = max(mx, ((4 * c) + 1));
    //     if (mx == pmx) {
    //         cout << mx << endl;
    //         return;
    //     }
    // }

    
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
