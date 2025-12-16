/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 12 2025 2:20:18 AM
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
    bool od = false, ev = false;
    for(auto &e:v) cin>>e, od |= (e%2), ev|=(e%2==0);
    if(od && ev)
    {
        srt(v);
        for(auto &e:v) cout<<e<<" ";
        return;
    }
    for(auto &e:v) cout<<e<<" ";


    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
