/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jul 05 2025 6:05:53 PM
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

void sir2()
{
    // Bismillahir Rahmanir Rahim 

    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    ll sum = 0;
    for(auto &e:v)
    {
        cin>>e;
        sum+=e;
    }
    if(sum>k)
    {
        no;
        return;
    }
    yes;
}

void sir()
{
    ll n; cin>>n;
    vector<string>v;
    ll x= n;
    while(x--)
    {
        string s;
        cin>>s;
        v.pb(s);
    }
   // for(auto &e:v) cout<<e<<" ";
    set<string>st;
    for(ll i=0;i<n; i++)
    {
        for(ll j = 0; j<n; j++)
        {
            if(i==j) continue;
            else{
                string ss= "";
                ss += v[i];
                ss += v[j];
                st.insert(ss);
            }
        }
    }
    cout<<st.size()<<endl;
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
