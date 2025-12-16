/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 17 2025 10:24:53 PM
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

void sir2()
{
    ll n; cin>>n;
    vector<ll>p(n), s(n);
    for(auto &e:p) cin>>e;
    for(auto &e:s) cin>>e;

    ll gcd1, gcd2;
    gcd1 = __gcd(s[0], s[1]);
    for(ll i=2; i<n; i++) gcd1 = __gcd(gcd1, s[i]);
    gcd2 = __gcd(p[n-1], p[n-2]);
    for(ll i=n-3; i>=0; i--) gcd2 = __gcd(gcd2, p[i]);

    // ll lcm1 = lcm(s[0], s[1]);
    // for(ll i=2; i<n; i++) lcm1 = lcm(lcm1, s[i]);
    // ll lcm2 = lcm(p[0], p[1]);
    // for(ll i=2; i<n; i++) lcm2 = lcm(lcm2, p[i]);
    // cout<<gcd1<<" "<<gcd2<<endl;
    // cout<<lcm1<<" "<<lcm2<<endl;
    if(gcd1==gcd2 && gcd1!=1) yes;
    else no;
}
void sir()
{
    ll n; cin>>n;
    vector<ll>p(n), s(n);
    for(auto &e:p) cin>>e;
    for(auto &e:s) cin>>e;
    if(s[0] != p[n-1])
    {
        no; return;
    }

    for(ll i=0; i<n-1; i++)
    {
        if(p[i]%p[i+1])
        {
            no;
            return;
        }
    }
    for(ll i=n-1; i>=1; i--)
    {
        if(s[i]%s[i-1])
        {
            no; return;
        }
    }
    ll gcd = p[n-1];
    ll chk = __gcd<ll>(p[0],s[n-1]);
    if(chk%gcd)
    {
        no;
        return;
    }
    
    for(ll i=0; i<n-1; i++)
    {
        ll tem = __gcd<ll>(p[i], s[i+1]);
        if(tem!=gcd)
        {
            no;
            return;
        }

    }
    yes;
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
