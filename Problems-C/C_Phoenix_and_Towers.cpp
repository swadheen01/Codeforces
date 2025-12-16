/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon May 26 2025 4:13:56 AM
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
    ll n,m,x; cin>>n>>m>>x;
    set<pair<ll,ll>>v;
    yes;
    for(ll i=1; i<=m; i++)v.insert({0,i});
        
    for(ll j=0; j<n; j++)
    {
        ll h; cin>>h;
        auto p = *v.begin();
        v.erase(p);
        cout<<p.second<<" ";
        v.insert({p.first+h,p.second});
    }
    cout<<endl;
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
