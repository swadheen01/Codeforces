/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 13 2025 3:26:20 AM
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
    // Bismillahir Rahmanir Rahim 

    ll n; cin>>n;
    vector<ll>v(n);
    ll mx =-1, mn = 1e9;
    ll mxi, mni;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]>mx) mx = v[i], mxi = i;
        if(v[i]<mn) mn = v[i], mni = i;
        
    }
    for(ll i=1;i<n; i++)
    {
        if(max(v[i], v[i-1])-min(v[i],v[i-1])>=2)
        {
            yes;
            cout<<i<<" "<<i+1<<endl;
            return;
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
