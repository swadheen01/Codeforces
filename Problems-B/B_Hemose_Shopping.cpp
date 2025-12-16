/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Apr 20 2025 7:51:17 PM
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
    ll n,x; cin>>n>>x;
    vector<ll>v(n), c(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        c[i] = v[i];
    }
    if(n>=2*x)
    {
        cout<<"YES\n";
        return;
    }
    sort(c.begin(),c.end());
    for(ll i=n-x; i<x; i++)
    {
        if(v[i]!=c[i])
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
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
