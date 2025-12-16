/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 23 2025 1:36:55 AM
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
    string s; cin>>s;
    ll n = s.length();

    bool ab = false, ba = false;
    // for(ll i=0; i<n-2; i++)
    // {
    //     if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='A')
    //     {
    //         no;
    //         return;
    //     }
    //     if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B')
    //     {
    //         no;
    //         return;
    //     }
        
    // }
    ll b,a;
    for(ll i=0; i<n-1; i++)
    {
        if(s[i]=='A'&&s[i+1]=='B') 
        {
            if(ba && i!=a)
            {
                yes;
                return;
            }
            else{
                if(!ab) ab = true ,b=i+1;
            }
        }
        if(s[i]=='B' && s[i+1]=='A') 
        {
            if(ab && i !=b)
            {
                yes;
                return;
            }
            else 
            {
                if(!ba)
                ba = true,
                a = i+1;
            }
        }
    }
    no;
    
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
