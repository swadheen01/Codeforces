/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Feb 22 2025 11:30:47 PM
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
#define co cout
void sir()
{
    ll n; cin>>n;
    string s; cin>>s;
    map<char,ll>mp;
    for(auto &c:s)
    {
        mp[c]++;
    }
    for(auto &pair:mp)
    {
        if(pair.second %n !=0)
        {
            co<<-1<<endl;
            return;
        }
    }
    string ans = "";

    for(auto &p:mp)
    {
        ll x = p.second/n;
        while(x--) ans += p.first;
    }
    while(n--) co<<ans;
    return;
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
