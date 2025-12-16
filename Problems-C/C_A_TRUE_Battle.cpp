/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Oct 31 2024 11:37:09 PM
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
    string s; cin>>s;
    int ans = 0;
    int ek, last;
    if(s[0]=='0') ek=0;
    else ek = 1;
    if(s[n-1]=='0') last = 0;
    else last = 1;

    if(ek||last){
        yes; return;
    }
    for(ll i=0; i<n-1; i++)
    {
        if(s[i]=='1'&&s[i+1]=='1')
        {
            yes;
            return;
        }
    }
    no; return;
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
