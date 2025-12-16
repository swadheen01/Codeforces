/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 25 2024 11:08:18 PM
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
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<ll>ans;
    srt(v);
    ll d = INT_MAX;
    ll one,last;
    for(ll i=0; i<n-1; i++){
        if(abs(v[i]-v[i+1])<=d){
            d = abs(v[i]-v[i+1]);
            one = i;
            last = i+1;
        }
    }
    //cout<<one<<" "<<last<<endl;
    for(ll i=one; i<n; i++){
        if(i==one+1) continue;
        else ans.pb(v[i]);
    }
    for(ll i=0; i<one; i++)
    {
        ans.pb(v[i]);
    }
    ans.pb(v[last]);

    // if(n==2){
    //     for(auto e:v) cout<<e<<" ";
    //     cout<<endl;
    // }
    for(auto e:ans){
        cout<<e<<" ";
    }cout<<endl;

    
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
