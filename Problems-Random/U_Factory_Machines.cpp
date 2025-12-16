/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Feb 02 2025 5:05:09 PM
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

bool chk(vector<ll> &v, ll n,ll mid,ll tot)
{
    ll done = 0;
    for(ll i=0; i<n; i++)
    {
        done += (mid/v[i]);
    }
    if(done>=tot) return true;
    return false;
}

void sir()
{
    ll n,tot; cin>>n>>tot;
    ll mn = 1e18;
    vector<ll>v(n); 
    for(auto &e:v) {
        cin>>e; 
        if(e<mn) mn = e;
    }
    ll lim = mn * tot;
    ll lo=1, hi = lim, mid;
    ll ans ;
    while(lo<=hi)
    {
        mid = (hi + lo)/2;
        if(chk(v,n,mid,tot))
        {
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
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
