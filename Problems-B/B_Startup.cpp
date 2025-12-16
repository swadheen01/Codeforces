#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,k; cin>>n>>k;
    map<ll,ll>bottles;
    for(ll i=0; i<k; i++)
    {
        ll b,c; cin>>b>>c;
        bottles[b] += c;
    }
    
    vector<pair<ll,ll>>price_band;

    for(auto &pair:bottles)
    {
        price_band.push_back({pair.second,pair.first});
    }
    sort(price_band.rbegin(), price_band.rend());
    ll ans = 0;
    ll ind =0;
    ll x = min(n,k);
    while(x--)
    {
        ans += price_band[ind].first;
        ind++;
        if(ind==price_band.size()) break;
    }
    cout<<ans<<endl;

}

int main()
{
    ll t; cin>>t;
    while(t--) solve();
}