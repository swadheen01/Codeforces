/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 29 2024 11:30:16 PM
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
    ll n,t; cin>>n>>t;
    
    if(t==10 && n==1) cout<<-1<<endl;
    else if(t==10 && n!=1)
    {
        for(int i=0; i<n-1; i++)
        {
            cout<<1;
        }cout<<0<<endl;
    }
    else{
        for(int i=0; i<n; i++)
        {
            cout<<t;
        }cout<<endl;
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
