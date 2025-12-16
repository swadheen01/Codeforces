/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Apr 23 2025 8:44:23 PM
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
    ll n; cin>>n; string s,t;
    cin>>s>>t;
    if(s==t)
    {
        cout<<0<<endl;
        return;
    }
    if(s[0] !=t[0])
    {
        cout<<-1<<endl;
        return;
    }
    ll cnt= 0;
    ll in = 0;
    ll one = 0;
    for(ll i=0; i<n; i++) 
    {
        cnt += (s[i]=='1');
        if(s[i]=='1' && one==0) one = i+1;
        if(s[i] != t[i] && in==0) in = i+1;
    }
    //cout<<one<<" "<<in<<endl; cout<<cnt<<endl;
    if(cnt==0 || one>=in)
    {
        cout<<-1<<endl;
        return;
    }
    
    vector<ll>ind;
    for(ll i=one;i<n; i++)
    {
        if(s[i]=='0') ind.pb(i);
    }
    string ss(n, '1');
    for(ll i=n-1; i>=one;i--)
    {
        if(t[i]=='0')
        {
            ind.pb(i);
        }
    }
    //cout<<ss<<endl;
    cout<<ind.size()<<endl;
    for(auto &e:ind) cout<<e<<" ";
    cout<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll tt = 1;
    cin>>tt;
    while(tt--)
    {
        sir();
    }
    return 0;
}
