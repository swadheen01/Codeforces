/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 07 2025 2:31:01 PM
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
    ll n;cin>>n;
    vector<ll>v;
    v.pb(n);
    for(ll i=0; i<64; i++)
    {
        if(n&(1ll<<i))
        {
            ll temp = (n^(1ll<<i));
            if(temp>=1) v.pb(temp);
        }
    }
    srt(v);
    cout<<v.size()<<endl;
    for(auto &e:v) cout<<e<<" ";
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
