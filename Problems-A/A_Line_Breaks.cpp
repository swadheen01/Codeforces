/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Dec 05 2024 8:38:52 PM
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
    ll n,m; cin>>n>>m;
    vector<string>v(n);
    ll s = 0;
    for(ll i=0; i<n;i++) cin>>v[i];
    ll c = 0;
    for(ll i=0;i<n; i++)
    {
        s += v[i].length();
        if(s>=m) break;
        else c++;
    }
    cout<<c<<endl;
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
