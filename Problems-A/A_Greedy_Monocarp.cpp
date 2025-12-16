/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 02 2024 8:38:47 PM
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
    for(auto &a:v) cin>>a;
    rsrt(v);
    ll sum = 0;
    if(v[0]>=k)cout<<0<<endl;
    else{
        vector<ll>p(n+1);
        for(ll i=1; i<=n; i++)
        {
            p[i]=v[i-1]+p[i-1];
            
        }
        ll ans = LLONG_MAX;
        for(ll i=1; i<=n;i++)
        {
           ll ad = k-p[i-1] - v[i-1];
           if(ad>=0){
            ans = min(ans,ad);
           }
        }
        cout<<ans<<endl;
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
