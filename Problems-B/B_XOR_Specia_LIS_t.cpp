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

    ll n;cin>>n;
    map<ll,ll>mp;
    vector<ll>v(n+1);
    bool ok = true;
    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 05 2025 1:42:50 AM
 */

        ok &= (v[i]>v[i-1]);
    }

    
    if(n%2==1 && ok)
    {
        no;
        return;
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
