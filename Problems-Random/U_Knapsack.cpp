/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 4:43:54 AM
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
map<ll,ll>mp;
ll ans = -1;
vector<pair<ll,ll>>v;

void knapsack(ll w, ll n, ll i, ll c, ll s)
{
    if(i==n)
    {
        if(c<=w)
        {
            ans = max(ans, s);
        }
        return;
    }
    if(c>w) return;

    knapsack(w, n, i+1, c, s);

    knapsack(w, n, i+1, c+v[i].first, s+v[i].second);
    
}

void sir()
{
    ll n,w; cin>>n>>w;

    vector<ll>temp;
    ll c = 0, s = 0;
    for(ll i=0; i<n; i++)
    {
        ll a,b; cin>>a>>b;
        v.push_back({a,b});
    }
    knapsack(w,n,0, c, s);

    cout<<ans<<endl;

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
