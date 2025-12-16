/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Oct 16 2024 11:21:22 PM
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
    vector<ll>v1,v2;
    for(ll i=0; i<n-1;i++)
    {
        if(s[i]>s[i+1]){
            v1.pb(i+1);
        }
    }

    if(v1.size()==0){
        cout<<0<<endl;
        return;
    }
    // ll st=v1[0]; ll k;
    // for(ll i=n-1; i>=0; i--)
    // {
    //     if(s[i]==0) k = i+1; break;
    // }

    // for(ll i=0;i<v1.size(); i++)
    // {
    //     v2.pb(v1[i]);
    //     if(v1[i]==k/2) v2.pb(k/2+1);
    //     else v2.pb(k-v1[i]);
    // }
    // srt(v2);
    string s2 = s;
    srt(s2);
    for(ll i=0; i<n; i++)
    {
        if(s[i] != s2[i]) v2.pb(i+1);
    }
    cout<<1<<endl;
    cout<<v2.size()<<" ";
    for(ll i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
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
