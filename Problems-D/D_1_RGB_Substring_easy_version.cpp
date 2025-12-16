/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 24 2025 5:01:08 AM
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
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    string r,g,b;
    for(ll i=0; i<k; i++)
    {
        if(i%3==0) r.pb('R');
        else if(i%3==1) r.pb('G');
        else r.pb('B');
    }
    //cout<<r<<endl;
    for(ll i=0; i<k; i++)
    {
        if(i%3==0) g.pb('G');
        else if(i%3==1) g.pb('B');
        else g.pb('R');
    }
    for(ll i=0; i<k; i++)
    {
        if(i%3==0) b.pb('B');
        else if(i%3==1) b.pb('R');
        else b.pb('G');
    }

    ll good = 0;

    for(ll i=0; i<n-k+1; i++)
    {
        ll mil = 0, ind =0;
        for(ll j=i; j<i+k; j++)
        {

            if(s[j]==r[ind])mil++;
            ind++;
        }
        good = max(good, mil);
    }
    for(ll i=0; i<n-k+1; i++)
    {
        ll mil = 0, ind =0;
        for(ll j=i; j<i+k; j++)
        {

            if(s[j]==g[ind])mil++;
            ind++;
      
        }
        good = max(good, mil);
    }
    for(ll i=0; i<n-k+1; i++)
    {
        ll mil = 0, ind =0;
        for(ll j=i; j<i+k; j++)
        {

            if(s[j]==b[ind])mil++;
            ind++;
          
        }
        good = max(good, mil);
    }
    cout<<k-good<<endl;
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
