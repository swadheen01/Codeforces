/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 16 2025 10:34:45 PM
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
    ll n,m; cin>>n>>m;
    ll v[n][m];
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++) cin>>v[i][j];
    }

    ll mx = -1;
    for(ll i=0; i<n; i++)
    {
        ll sum = 0;
        for(ll j =0;j<m; j++)
        {
            mx = max(mx, v[i][j]);
        }
        
    }

    ll cnt = 0;
    map<ll,ll>mp,mp2;
    for(ll i=0; i<n; i++)
    {
        
        for(ll j =0;j<m; j++)
        {
            if(v[i][j]==mx) 
            {
                mp[i]++; mp2[j]++;
            }
        }
        
    }
    for(ll i=0; i<n; i++)
    {
        
        for(ll j =0;j<m; j++)
        {
            if(v[i][j]==mx) 
            {
                cnt++;
            }
        }
        
    }
    for(ll i=0; i<n; i++)
    {
        
        for(ll j =0;j<m; j++)
        {
            if(mp[i]+mp2[j]-(v[i][j]==mx)==cnt) 
            {
                cout<<mx-1<<endl;
                return;
            }
        }
        
    }
    //cout<<st.size()<<" "<<st2.size();
    // for(auto [x,y]:st) cout<<x<<" ";
    cout<<mx<<endl;
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
