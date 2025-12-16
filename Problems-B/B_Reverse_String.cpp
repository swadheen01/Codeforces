/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Apr 25 2025 10:34:00 PM
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

void sir2()
{
    
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    int other = a + b + c - max(a, max(b, c));
    int L = a + b + c - 1 - 2 * other;
    int R = a - 1 + b - 1 + c - 1;
    cout << (L <= m && m <= R ? "YES" : "NO") << '\n';
}
void sir()
{
    string s, ss; 
    cin >> s >> ss;
    ll n = s.length();
    ll m = ss.length();
    bool ok = false;

    for (ll i = 0; i < n; i++) {

        for (ll j = 0; j < n - i; j++) {
            ll k = m - j - 1;

           
            if (i + j < k) continue;

            ll now = i;
            ll right = i + j;
            ll rev_start = right - k;
            
            if (rev_start < 0 || rev_start >= n) continue;  

            string shuja = s.substr(now, right - now + 1);
            string ulta = s.substr(rev_start, right - rev_start);
            reverse(ulta.begin(), ulta.end());

            if (ss == shuja + ulta) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
