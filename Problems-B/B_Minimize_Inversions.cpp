/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 17 2024 10:43:54 PM
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
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++)
    {
        
        cin>>v[i].first;
    }
    for(ll i=0;i<n;i++)
    {
        cin>>v[i].second;
    }
    srt(v);
   
    for(auto x:v)
    cout<<x.first<<" ";
    cout<<endl;
    for(auto x:v)
    cout<<x.second<<" ";
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
