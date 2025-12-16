/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Oct 03 2024 8:09:45 PM
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

bool pos(ll mid, ll n, vector<ll>&v, ll x)
{
    ll need = 0;
    for(ll i=0; i<n; i++)
    {
        if(v[i]<mid) need+= (mid-v[i]);
    }
    return need<=x;
}

void sir()
{
    // int y
    ll n,x; cin>>n>>x;
    vector<ll>v(n);
    ll mn = 1e9;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        mn = min(mn, v[i]); 
    }
    ll ans=1;
    ll lo = mn, hi = 1e12;
    while(lo<=hi)
    {
        ll mid = lo + (hi-lo)/2;
        if(pos(mid,n,v,x)){
            lo = mid + 1;
            ans = mid;
        }
        else hi = mid-1;
    }
    cout<<ans<<endl;
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
