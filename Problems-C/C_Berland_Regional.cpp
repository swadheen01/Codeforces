/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Aug 09 2025 9:21:24 PM
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
    vector<ll>u(n), s(n);
 
    for(auto &e:u) cin>>e;
    for(auto &e:s) cin>>e;

    vector<pair<ll,ll>>v;
    for(ll i=0; i<n; i++)
    {
        v.push_back({--u[i],s[i]});
    }
    srt(v);
    //for(auto &e:v) cout<<e.first<<" "; cout<<endl;
    //for(auto &e:v) cout<<e.second<<" "; cout<<endl;

    

    vector<ll>u_s[n];
    for(auto &p:v)
    {
        ll un = p.first;
        ll sk = p.second;
        u_s[un].pb(sk);
        
    }
    vector<ll>ans(n+1);
    vector<ll>pref[n];
    for(ll i=0; i<n; i++)
    {
        ll sum = 0;
        vector<ll> vv = u_s[i];
        
        for(auto &e:vv)
        {
            sum += e;
            pref[i].push_back(sum);

        }
        ll sz = vv.size();
        //if(sz==0) continue;
        for(ll j=1; j<=sz; j++)
        {
            if(sz%j==0) ans[j] += (pref[i][sz-1]);
            else
            {
                ans[j] += (pref[i][sz-1] - pref[i][(sz%j)-1]);
            }
        }
    }

    for(ll i=1; i<=n; i++) cout<<ans[i]<<" "; cout<<endl;



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
