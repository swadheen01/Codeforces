/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Apr 13 2025 11:05:56 PM
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
    ll xr = 0 ;
    for(auto &e:v) xr ^= e;
    ll mxr = 0;

    vector<pair<ll,ll>>got;
    for(ll i=0; i<n; i++)
    {
        ll cur = xr^v[i];
        cout<<cur<<" ";
        
        got.pb({cur,v[i]});
        
        
    }
    //cout<<got<<endl;
    rsrt(got);
    ll mx = got[0].second;
    // if(got.size()==1)
    // {
    //     mx = got[0].second;
    // }
    // else{
    //     // ll i=1;
    //     // mx = got[0].second;
    //     // ll cn = got[0].first;
    //     // while(got[i].first==cn && i<got.size())
    //     // {
    //     //     mx = max(mx, got[i].second);
    //     //     i++;
    //     // }
    //     mx = got[1].second;
    // }
    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        ans += (v[i]^mx);
    }
    cout<<mx<<ans<<endl;
}
void sir2()
{
    ll n; cin>>n;
    vector<ll>v(n), bit(31);
    for(auto &e:v) 
    {
        cin>>e;
        for(ll i=0; i<31; i++)
        {
            if(e&(1<<i)) bit[i]++;
        }
    }
    ll ans = 0;
    for(auto &e:v)
    {
        ll sum = 0;
        for(ll i=0; i<31; i++)
        {
            if(e&(1<<i))    //if this bit is on
            {
                ll zero = n-bit[i];
                sum += (zero * (1ll<<i));
            }
            else{   //if off
                sum += (bit[i]*(1ll<<i));
            }
            
        }
        ans = max(ans, sum);
    }
    cout<<ans<<endl;

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
