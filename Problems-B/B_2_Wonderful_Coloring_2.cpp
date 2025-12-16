/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 17 2025 2:19:45 AM
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
    ll n,k;cin>>n>>k;
    vector<ll>in(n);
    map<ll,pair<ll,vector<ll>>>mp;

    for(ll i=0; i<n; i++)
    {
        cin>>in[i];
        mp[in[i]].first++;
        mp[in[i]].second.pb(i);
    }

    vector<ll>baki;
    vector<ll>ans(n);

    for(auto &[a,b]:mp)
    {
        vector<ll>v;
        v = b.second;
        ll cnt = b.first;
        if(cnt<k){
            for(auto &d:v) baki.pb(d);
        }
        else{
            
            ll col=1;
            for(ll i=0; i<k; i++)
            {
                ll ind = v[i];
                ans[ind] = col;
                col++;
            }
            // for(ll i=last; i<sz; i++)
            // {
            //     ans[v[i]] = 0;
            // }
        }
    }
    
    ll x;
    if (k == 1 && !baki.empty()) x = 1;
    else x = baki.size() - (baki.size() % k);
    ll cl = 1;
    for(ll i=0; i<x; i++)
    {
        ll ind = baki[i];
        ans[ind] = cl; cl++;
        if(cl>k) cl = 1;
    }
    //for(ll i=x; i<baki.size(); i++) ans[baki[i]] = 0;
    
    for(auto &e:ans) cout<<e<<" ";

    cout<<endl;
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
