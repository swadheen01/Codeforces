/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 14 2025 2:12:31 AM
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
    for(auto &e:v) cin>>e;
    ll cnt = 0;
    for(ll i=0; i<n; i++)
    {
        bool find = false;
        for(ll d = i+2; d>=2; d--)
        {
            if(v[i]%d) {find = true;break;}
        }
        if(find)cnt++; //or  (ok &=find)
    }
    if(cnt==n) yes;
    else no;
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
