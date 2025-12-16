/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 07 2025 11:33:18 AM
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
    ll n,l,r,m; cin>>n>>l>>r>>m;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;

    ll x = (1<<n)-1;
    ll ans = 0;
    for(ll i=0; i<=x; i++)
    {
        ll sum = 0;
        ll mx = -1;
        ll mn = 2e9;
        for(ll j = 0; j<n; j++)
        {
            if(i&(1<<j))
            {
                sum+=v[j];
                mx = max(mx, v[j]);
                mn = min(mn, v[j]);
            }
        }
        if(sum>=l && sum<=r && (mx-mn>=m)) ans++;
    }
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
