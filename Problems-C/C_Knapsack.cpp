/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 16 2025 11:53:55 PM
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
    ll n,w; cin>>n>>w;
    vector<ll>v(n),pf(n+1);
    for(auto &e:v) cin>>e;

    vector<pair<ll,ll>>vp(n);
    for(ll i=0; i<n; i++) vp[i] = {v[i], i};
    srt(vp);

    ll mn = (w+1)/2;
    for(ll i=0; i<n; i++) if(vp[i].first>=mn && vp[i].first<=w)
    {
        cout<<1<<endl<<vp[i].second+1<<endl;
        return;
    }
 
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<ll>ans;
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {

        sum += vp[i].first;
        pq.push(i);
        if(sum>=mn) break;
    }
    while(sum>w && !pq.empty())
    {
        ll ind = pq.top();
        sum-=vp[ind].first;
        pq.pop();
    }
    if(sum<mn)
    {
        cout<<-1<<endl;
        return;
    }
    while(!pq.empty())
    {
        ll ind = pq.top();
        ans.pb(vp[ind].second+1);
        pq.pop();
    }
    srt(ans);
    cout<<ans.size()<<endl;
    for(auto &e:ans) cout<<e<<" "; cout<<endl;

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
