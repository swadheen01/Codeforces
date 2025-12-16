
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Apr 15 2025 11:38:11 PM
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
    ll n; cin>>n;
    vector<ll>v2(n);
    for(auto &e:v2) cin>>e;
    string s; cin>>s;
    vector<pair<char,ll>>v;
    set<ll>st;
    for(ll i=0; i<n; i++)
    {
        v.push_back({s[i],v2[i]});
        //if((v2[i]>=1 && v2[i]<=n)&& st.find(v2[i])==st.end()) st.insert(v2[i]);
    }
    sort(v.begin(),v.end());
    ll num = 1;
    for(ll i=0; i<n;i++)
    {
        char c = v[i].first;
        ll nn = v[i].second;
        if(c=='B')
        {
            if(nn>=num) num++;
            else{
                no; return;
            }
        }
        else{
            if(nn<=num) num++;
            else{
                no; return;
            }
        }
    }
    yes; return;
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
