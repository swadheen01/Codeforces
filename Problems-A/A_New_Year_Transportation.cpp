/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Aug 30 2024 12:47:12 AM
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
    ll n,t;
    cin>>n>>t;
    ll arr[n-1];
    for(ll i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }
    int ok = 0;
    ll i=0;

    while(i<=n)
    {
        if(i==(t-1)) {ok = 1;break;}
        i += arr[i];
    }
    cout<<((ok) ? "YES" : "NO" )<<endl;
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
