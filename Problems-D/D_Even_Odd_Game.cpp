/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 25 2024 1:31:59 AM
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
    ll n; cin>>n;
    vector<ll>v(n),v0,v1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    rsrt(v);
    ll alic = 0;
    ll bob = 0;
    ll ind = 0;
    for(auto p:v)
    {
        if(ind%2==0 && p%2==0) alic += p;
        else if(ind%2==1 && p%2==1) bob += p; 
        ind++;
    }

    // ll c1 = 0;
    // ll x = (n+1)/2;
    // if(n==1 && v[0]%2==0){cout<<"Alice"<<endl; return;}
    // else if(n==1) {cout<<"Tie"<<endl; return;}

    // for(int i=0; i<n; i++)
    // {
    //     if(v[i]%2==0){
    //         v0.pb(v[i]);
    //     }
    //     else v1.push_back(v[i]);
    // }
    // if(v0.size()>v1.size())
    // {
    //     for(ll j=0; j<v1.size(); j++)
    //     {
    //         bob += v1[j];
    //     }
    //     for(ll i=0; i<v1.size(); i++)
    //     {
    //         alic += v0[i];
    //     }
    //     ll d = v0.size() - v1.size();
    //     for(int i=0; i<d-1;i+=2)
    //     {
    //         alic += v0[i];
    //     }
        
    // }
    // else if(v0.size()<v1.size())
    // {
    //     for(ll i=0; i<v0.size(); i++)
    //     {
    //         alic += v1[i];
    //     }
    //     ll d = x-v0.size();
    //     for(ll j=0; j<v1.size(); j++)
    //     {
    //         bob += v1[j];
    //         if(d>0){
    //             j++;
    //             d--;
    //         }
    //     }
    // }
    // else{
    //     for(int i=0; i<x; i++)
    //     {
    //         alic += v0[i];
    //         bob += v1[i];
    //     }
    // }
    if(alic>bob) cout<<"Alice"<<endl;
    else if(bob>alic) cout<<"Bob"<<endl;
    else cout<<"Tie"<<endl;
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
