/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 17 2025 8:43:03 PM
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
    ll n;cin>>n;
    vector<ll>v(n);
    ll z=0, on = 0;
    for(auto &e:v) cin>>e, z+=(e==0), on+=(e==1);
   
    if(z==n || on==n)
    {
        yes; return;
    }
    for(ll i=1; i<n; i++)
    {
       
        if(v[i]+v[i-1]==0)
        {
            yes; return;
        }
    }
    no;
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
