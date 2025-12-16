/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 05 2025 8:46:10 PM
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
    ll n,q; cin>>n>>q;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    srt(v);
    while(q--)
    {
        ll k; cin>>k;
        auto it = lower_bound(v.begin(), v.end(),k);
        //cout<<*it<<endl;
        ll ans = it-v.begin();
       
            cout<<ans<<endl;
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
