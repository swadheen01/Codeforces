/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 03 2025 10:22:15 PM
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
#define mod 127657753
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

const ll mx = 1e6+5;
vector<ll> f(mx);

ll mp(ll a, ll b) {
    ll res = 1;
    while(b> 0) {
        if (b % 2) res = (res * a)% mod;
        a = (a*a) % mod;
        b /= 2;
    }
    return res;
}

ll inv(ll a) {
    return mp(a, mod-2);
}

void sir()
{
    ll n;
    cin >> n;
    cout << f[n]<<endl;
}

int main() {
    ALLAHU_AKBAR

    f[0] = 2;
    f[1] = 3;
    f[2] = 5;

    for(ll i = 3; i < mx; ++i) 
    {
        ll num = (f[i - 1] * f[i-2]) % mod;
        ll dev = inv(f[i-3]);
        f[i] = ((num * dev)%mod - f[i-2] + mod)%mod;
    }

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
