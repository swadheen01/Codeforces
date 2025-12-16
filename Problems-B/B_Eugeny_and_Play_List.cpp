/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 08 2024 11:29:35 PM
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

void sir()
{
    // int y
    ll n, m;
    cin >> n >> m;
    
    vector<ll> dur(n), tot(n);
    
    for (ll i = 0; i < n; ++i) {
        ll c, t;
        cin >> c >> t;
        dur[i] = c * t; 
        if (i > 0) {
            tot[i] = tot[i - 1] + dur[i]; //total dur pref
            } else { tot[i] = dur[i];}
    }
    
    vector<ll> mom(m);
    for (ll i = 0; i < m; ++i) {
        cin >> mom[i];
    }
    vector<ll> ans(m);
    //binary for nth
    for (ll i = 0; i < m; ++i) {
        ll x = mom[i];
        ll lo = 0, hi = n - 1;
        
        while (lo < hi) {
            ll mid = lo + (hi - lo) / 2;
            if (tot[mid] < x) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        ans[i] = lo + 1;
    }
    for (ll i = 0; i < m; ++i) {
        cout << ans[i] << endl;
    }
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
