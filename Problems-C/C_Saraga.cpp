/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 01 2024 9:55:50 PM
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
    string s,t; cin>>s>>t;
    map<char,vector<ll>>locs,loct;

    for(ll i=1; i<s.size();i++)
    {
        locs[s[i]].pb(i);
    }
    for(ll i=0; i<t.size()-1;i++)
    {
        loct[t[i]].pb(i);
    }
    string ans = "";
    for (const auto &entry : locs) {
    char c = entry.first;          // The key (character)
    const vector<ll> &v = entry.second;
    if(loct.count(c))
        {
            ll a = locs[c].front();
            ll b = loct[c].back();
            string chk = s.substr(0,a) + t.substr(b);
            if(ans.empty() || chk.size()<ans.size()) ans = chk;
        }
    }
    if(ans.empty()) ans = "-1";
    cout<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll tt = 1;
    //cin>>t;
    while(tt--)
    {
        sir();
    }
    return 0;
}

