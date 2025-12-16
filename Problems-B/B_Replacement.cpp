/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Dec 17 2024 10:12:33 PM
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
    ll n;cin>>n;
    string s,r; cin>>s>>r;

    ll c1= 0, c0=0;
    for(ll i=0;i<n; i++)
    {
        if(s[i]=='0') c0++;
        else c1++;
    }
    if(c1==0||c0==0){
        cout<<"NO\n";
        return;
    }
    ll op = n-1;
    ll ind =0;
    while(op--)
    {
        if(c1==0||c0==0){
            cout<<"NO\n";
            return;
        }
        if(r[ind++]=='0') c1--;
        else c0--;
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
