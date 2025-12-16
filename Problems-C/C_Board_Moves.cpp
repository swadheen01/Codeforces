/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 14 2024 12:06:31 PM
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
    //ll ans = 0;
    n = (n-1)/2;
    ll ans = (n*(n+1)*(2*n+1))/6; // O(1) approach
    // O(N) approach below
    // for(ll i=1; i<=n/2; i++)
    // {
    //     ans += i*i;
    // }
    cout<<ans*8<<endl;
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
