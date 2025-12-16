/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Aug 04 2025 3:39:31 AM
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
    vector<ll>v(n);
    ll one = 0, two = 0, z = 0;
    for(auto &e:v) {cin>>e; if(e==1) one = 1; if(e==2) two = 1; if(e==0) z= 1;}

    set<ll>st;
    for(auto &e:v)st.insert(e);

    if(one && (z || two))
    {
        no;
        return;
    }
    if(one)
    {
        for(auto e:v)
        {
            if(st.find(e-1) != st.end())
            {
                no;
                return;
            }
        }
    }
    yes;
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
