/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Apr 18 2025 3:34:30 PM
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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x = abs(c-a);
    ll y = abs(d-b);
    if(x==y)
    {
        cout<<1<<endl;
    }
    else if(x%2==y%2)
    {
        cout<<2<<endl;
    }
    else cout<<"impossible"<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    ll aa = 1;
    while(aa<=t)
    {
        cout<<"Case "<<aa<<": ";
        aa++;
        sir();
    }
    return 0;
}
