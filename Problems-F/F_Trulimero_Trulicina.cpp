/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 17 2025 4:08:30 AM
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
    ll n,m,k; cin>>n>>m>>k;
    ll v[n][m];
    if(m%k==0)
    {
        vector<ll>kv,kc;
        for(ll i=1;i<=k; i++)kv.pb(i);
        kc = kv;
        rotate(kc.begin(), kc.begin() + 1, kc.end());
    
        for(ll i=0;i<n; i++)
        {
            ll ind = 0;
            for(ll j=0; j<m; j++)
            {
                if(i%2==0)
                {
                    v[i][j] = kv[ind++];
                    ind = ind % k;
                }
                else{
                    v[i][j] = kc[ind++];
                    ind = ind % k;
                }
            }
        } 
        
    }
    else{
        ll c = 1;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                v[i][j] = c++;
                if(c>k) c = 1;
            }
        }
    }
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    
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
