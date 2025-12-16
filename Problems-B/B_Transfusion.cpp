/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Dec 05 2024 9:00:31 PM
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
{   ll n; cin>>n;
    vector<ll>v(n);
    ll sum = 0;
    for(auto &s:v) cin>>s, sum +=s;
    ll med = sum/n;
    if(sum%n){
        no; return;
    }
    for(ll i=1; i<n-1; i++)
    {
        ll d = med-v[i-1];
        v[i-1]+=d;
        v[i+1]-=d;
    }
    for(ll i=0; i<n-1; i++)
    {
        if(v[i]!=v[i+1]){
            no; return;
        }
    }
    yes;
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
