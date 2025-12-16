/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Oct 02 2024 11:53:44 PM
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
    // int y
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0; i<n;i++) cin>>v[i];
    srt(v);

    ll low = 1, hi = 2e9+100;
    ll ans = v[n/2];
    while(low<=hi)
    {
        ll mid = (low+hi)/2;
        ll op= 0;
        for(ll i=n/2; i<n; i++)
        {
            if(v[i]<mid) op += (mid-v[i]);
        }
        if(op<=k){
            ans = mid;
            low = mid+1;
        }
        else hi = mid - 1;
        
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
