/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jul 25 2025 11:34:40 PM
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
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}


void sir()
{
    ll n; cin>>n;
    ll sum = 0;

    ll lc= 1;
    for(ll i=1; i<=100; i++)
    {
        if(lc>n) break;
        ll l = (n/lc);
        lc = lcm(lc,i);
        ll r = (n/lc);

        ll v = ((l-r)*i)%mod;
        sum = (sum +v)%mod;
        
    }
    cout<<sum%mod<<endl;
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
