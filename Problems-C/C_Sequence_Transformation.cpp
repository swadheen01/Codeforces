/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri May 02 2025 2:18:24 PM
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

    vector<ll>vv;
    ll ind = 0;
    vv.pb(v[0]);
    for(auto &e:v)
    {
        if(vv[ind]!=e) vv.pb(e), ind++;

    }
    map<ll,ll>mp;
    for(auto &e:vv) mp[e]++;
    //for(auto &e:vv) cout<<e<<" ";
    ll ans = 1e18;
    for(ll i=0; i<vv.size(); i++)
    {
        ll temp = mp[vv[i]]+1;

        if(vv[0]==vv[i]) temp--;
        if(vv[vv.size()-1]==vv[i])temp--;

        //if(mp[vv[i]]==1 && (i==0 || i==vv.size()-1)) ans = min(ans,1ll);

        ans = min(ans, temp);
    }
    cout<<ans<<endl;
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
