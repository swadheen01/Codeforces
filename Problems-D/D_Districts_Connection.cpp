/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu May 08 2025 2:59:22 AM
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
    ll n; cin>>n;
    vector<ll>v(n),one;
    map<ll,ll>mp;
    for(auto &e:v) cin>>e, mp[e]++;

    if(mp.size()==1)
    {no; return;}

    yes;
    ll a = v[0];
    ll b;
    for(ll i=1; i<n; i++){
        if(v[i] !=a)
        {
            cout<<1<<" "<<i+1<<endl; 
            b = i+1;
        }
        else one.pb(i+1);
    }
    ll x = one.size(); ll ind = 0;
    while(x--)
    {
        cout<<b<<" "<<one[ind++]<<endl;
    }
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
