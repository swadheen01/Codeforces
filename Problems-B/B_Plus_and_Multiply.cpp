/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Feb 02 2025 2:57:36 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
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
    ll n,a,b; cin>>n>>a>>b;
    
    if(n==1 || b==1|| n%b==1) {yes; return;}
    ll i = 0;
    if(a==1)
    {
        if(n%b==1)yes;
        else no;
        return;
    }
    while(pow(a,i)<=n)
    {
        ll x =n-pow(a,i);
        if(x%b==0) { yes; return;}
        i++;
    }
    no;
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
