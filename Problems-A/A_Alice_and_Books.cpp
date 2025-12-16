/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Aug 19 2024 11:57:06 PM
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
    ll n;cin>>n;
    vector<ll>v(n);
    for(auto &x:v) cin>>x;
    ll cnt=0, mx=0;
 
    // for(ll i=0;i<n;i++)
    // {
    //     if(i==n-1)
    //     {
    //         cnt=v[i]+v[n-2];
 
    //     }
    //     else cnt= v[i]+v[n-1];
    //     mx = max(cnt,mx);
 
    // }
    //other way

    ll must = v[n-1];
    v.pop_back();
    sort(v.rbegin(), v.rend());

    mx = must + v[0];
    cout<<mx<<endl;
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
