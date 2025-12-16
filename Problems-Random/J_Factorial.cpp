/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 2:20:40 AM
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

ll fib(ll n)
{
    if(n==1)return 0;
    if(n==2) return 1;
    
    return fib(n-1)+fib(n-2);
}

void sir()
{
    ll n; cin>>n;
    cout<<fib(n);
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
