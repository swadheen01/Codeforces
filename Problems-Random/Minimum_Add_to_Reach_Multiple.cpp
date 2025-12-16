/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 05 2025 9:03:27 PM
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
    ll a,b; cin>>a>>b;
    if(a%b==0)
    {
        cout<<0<<endl;
        return;
    }
    ll x = (a/b)+1;
    cout<<(x*b)-a<<endl;
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
