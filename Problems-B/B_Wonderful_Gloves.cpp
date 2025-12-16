/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Apr 19 2025 9:20:03 PM
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
    ll n,k; cin>>n>>k;
    vector<ll>l(n),r(n);
    vector<pair<ll,ll>>sum(n);
    //ll sum = 0;
    for(ll i=0; i<n; i++) {cin>>l[i];}
    for(ll i=0; i<n; i++) {cin>>r[i]; sum[i]={(l[i]+r[i]),max(l[i],r[i])};}
    rsrt(sum);
    //for(auto &e:sum) cout<<e.first<<" "<<e.second<<" ";
    ll ans = 0;
    for(ll i=0; i<k-1; i++)
    {
        ans += sum[i].first;
    }
    for(ll i=k-1; i<n; i++)
    {
        ans += sum[i].second;
    }
    cout<<ans + 1<<endl;

    
}
void sir2()
{
    ll n,k; cin>>n>>k;
    vector<ll>l(n),r(n),v;
    ll sum = 0;
    for(ll i=0; i<n; i++) cin>>l[i];
    for(ll i=0; i<n; i++) {cin>>r[i]; sum += max(l[i],r[i]); v.pb(min(r[i],l[i]));}

    rsrt(v);

    for(ll i=0; i<k-1; i++) sum += v[i];

    cout<<sum+1<<endl;
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
