/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 31 2025
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
#define mod 998244353
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

vector<ll> pp(100001);

void po() {
    pp[0] = 1;
    for(ll i = 1; i < 100001; i++) {
        pp[i] = (pp[i-1]*2)%mod;
    }
}

void sir()
{
    ll n;
    cin >> n;
    vector<ll> p(n), q(n), r(n);

    for(ll i = 0; i < n; i++) cin >> p[i];
    for(ll i = 0; i < n; i++) cin >> q[i];

    for(ll i = 0; i < n; i++) {
        ll mx = 0;
        for(ll j = max(0ll,i-1000); j <= i; j++) {
            ll v1 = pp[p[j]];
            ll v2 = pp[q[i-j]];
            ll sum = (v1 + v2) % mod;
            
            mx = max(sum,mx);
        }
        r[i] = mx;
    }

    for(ll i = 0; i < n; i++) {
        cout << r[i]<<" ";
    }
    cout << endl;
}

int main() {
    ALLAHU_AKBAR
    po();
    ll t;
    cin >> t;
    while(t--) {
        sir();
    }
    return 0;
}
