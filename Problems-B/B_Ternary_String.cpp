/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu May 08 2025 10:19:57 PM
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
    string s; cin>>s;
    map<char,ll>mp;
    for(auto &c:s) mp[c]++;
    if(mp['1']==0 || mp['2']==0|| mp['3']==0)
    {
        cout<<0<<endl;
        return;
    }
    vector<ll>v1,v2,v3;
    for(ll i=0; i<s.length(); i++)
    {
        if(s[i]=='1') v1.pb(i);
        else if(s[i]=='2') v2.pb(i);
        else v3.pb(i);
    }

    ll ans = 1e9;
    for(ll i=1; i<s.length(); i++)
    {
        char one = s[i-1], two = s[i];
        if(one!=two)
        {
            char thr = '1' + '2' + '3' - one - two;
            ll val = -1;
            if(thr=='1')
            {
                auto ind = upper_bound(v1.begin(), v1.end(),i);
                if(ind!=v1.end()) val = v1[ind-v1.begin()];

            }
            else if(thr=='2')
            {
                auto ind = upper_bound(v2.begin(), v2.end(),i);
                if(ind!=v2.end()) val = v2[ind-v2.begin()];
            }
            else{
                auto ind = upper_bound(v3.begin(), v3.end(),i);
                if(ind!=v3.end()) val = v3[ind-v3.begin()];
            }
            if(val !=-1) 
            {
                ll x = 2 + (val-i);
                ans = min(ans,x);
            }
        }
    }
    cout<<ans<<endl;
}
void way2()
{
    string s; cin>>s;
    ll n = s.size();

    vector<pair<char,ll>>v;
    ll ind = -1;
    for(ll i=0;i<n; i++)
    {
        if(ind==-1 || v[ind].first != s[i])
        {
            v.pb({s[i],1}); ind++;
        }
        else v[ind].second++;
    }

    ll ans = LLONG_MAX;
    for(ll i=1; i<ind; i++)
    {
        if(v[i-1].first != v[i+1].first)
        {
            ans = min(ans,v[i].second+2);
        }
    }
    if(ans == LLONG_MAX){
        cout<<0<<endl;
        return;
    }
    cout<<ans<<endl;
}
void sir4()
{
    string s; cin>>s;
    for(ll i=0; i<s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<"Its a test"<<endl;
    string ss; cin>>ss;
    cout<<ss<<endl;
    cout<<"Hello World"<<endl;
    

}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        way2();
      
    }
    return 0;
}
