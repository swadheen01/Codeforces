/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Dec 31 2024 9:57:11 PM
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
    ll n,k,q; cin>>n>>k>>q;
    vector<ll>v; ll c=0;
    while(n--){
        ll x; cin>>x;
        x<=q?c++:c=0;
        if(c>=k)v.push_back(c);
    }
    
    ll ans=0;
    for(auto &x:v)ans+=x-k+1;
    cout<<ans<<'\n';
    
}

void sir2()
{
    ll n;
    cin>>n;
    ll arr[n][n];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
 
    ll ans=0;
 
    vector<ll> mn(n*2-1,INT_MAX);
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            mn[i-j+(n-1)]=min(mn[i-j+(n-1)],arr[i][j]);
        }
    }
 
    for(ll i=0; i<mn.size(); i++){
        if(mn[i]<0){
            ans+=abs(mn[i]);
        }
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
