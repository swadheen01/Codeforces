/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 01 2024 11:40:51 PM
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
    string s,t; cin>>s>>t;
    if(s==t) cout<<-1<<endl;
    else{
        ll sz = s.size();
        ll tz = t.size();
        ll ans;
        if(sz>=tz) ans = sz;
        else ans = tz;
        cout<< ans<<endl;
    }
}

int main() {
    ALLAHU_AKBAR

    ll tt = 1;
    //cin>>tt;
    while(tt--)
    {
        sir();
    }
    return 0;
}
