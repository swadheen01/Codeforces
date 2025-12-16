/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 01 2024 12:14:18 AM
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
    ll n,l,r; cin>>n>>l>>r;
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    srt(v);
    ll ans = 0;

    //ll a,b;   if ll used, then "-v.begin()" needed.
    for (ll i = 0; i < n; i++) {
        auto a = lower_bound(v.begin()+i+1, v.end(), l-v[i]);
        auto b = upper_bound(v.begin()+i+1, v.end(), r-v[i]);
        ans += (b-a);
    }
    cout << ans << "\n";
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