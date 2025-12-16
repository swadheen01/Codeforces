/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed May 07 2025 8:31:16 PM
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
    vector<ll>v(n);
    ll a=0,b=0, c=0;
    for(auto &e:v)
    {
        cin>>e;
        a+=(e==1);
        b+=(e==2);
        c+=(e==0);
    }
    c-= abs(a-b);
    if(c<0)
    {
        no; return;
    }
    if(c%2==0)
    {
        yes; return;
    }
    no; return;
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
