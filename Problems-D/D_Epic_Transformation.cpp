/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Apr 16 2025 12:32:51 AM
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
    for(auto &e:v) cin>>e;
    sort(v.begin(),v.end());

    ll lo = n/2 -1, hi = n-1;
    ll ans = n;
    while(lo>=0 && hi>=(n/2))
    {
        if(v[lo] != v[hi]) 
        {
            lo--, hi--;
            ans-=2;
        }
        else break;
    }
    cout<<ans<<endl;
}
void sir2()
{
    ll n; cin>>n; vector<ll>v(n); map<ll,ll>mp; for(auto &e:v) {cin>>e; mp[e]++;} 
    priority_queue<pair<ll,ll>>q; 
    for(auto &[a,b]:mp)q.push({b,a}); 
    ll sz = n;
    while(q.size()>=2){
        auto [c1,x1] = q.top();
        q.pop();
        auto [c2,x2] = q.top(); 
        q.pop();
        c1--, c2--, sz-=2;
        if(c1) q.push({c1,x1});
        if(c2) q.push({c2,x2});
    }
    cout<<sz<<endl;
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
