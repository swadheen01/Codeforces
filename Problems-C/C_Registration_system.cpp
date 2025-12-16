/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 16 2024 11:30:52 PM
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
    map<string, int>mp;
    for(ll i=0; i<n; i++)
    {
        string s; cin>>s;
        if(mp[s]==0) cout<<"OK"<<endl;
        else{
            cout<<s<<mp[s]<<endl;
        }
        mp[s]++;
    }
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
