/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 06 2024 12:04:55 AM
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
   
    
    if(k<=n) {cout<<0<<endl; return ;}
    ll v;
    if((k/n) > 0) v = ((k/n)+1)/2;
    else v = (k/n)/2;
    // ll v = ceil(k/n);
    ll ans = v * (k-(v*n));
    cout<<ans<<endl;
    
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
