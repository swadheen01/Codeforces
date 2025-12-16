/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Feb 01 2025 7:07:25 PM
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
    map<ll,ll>mp;
    map<ll,ll>pg;
    for(ll i=1; i<=n; i++)
    {
        pg[i]=i;
        mp[i]=1;
    }
    ll c = 0;
    while(q--)
    {
        ll tp; cin>>tp;
        if(tp==2)
        {
            cout<<c<<endl;
        }
        else{
            ll p,h; cin>>p>>h;
            mp[h]++;
            mp[pg[p]]--;
            if(mp[pg[p]]==1) c--;
            if(mp[h]==2) c++;
            pg[p] = h;

        }
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
