/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Mar 17 2025 8:57:17 PM
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
    ll n,k;cin>>n>>k;
    vector<ll>v(n);

    for(auto &e:v) cin>>e;
    
    ll ans =0;
    if(k>1)
    {
        rsrt(v);
        for(ll i=0; i<=k; i++)
        {
            ans += v[i];
        }
        cout<<ans<<endl;
        return;
    }
    else{
        ans = v[0] + v[n-1];
        for(ll i=1; i<n-1; i++)
        {
            ll s1 = v[i] + v[0];
            ll s2 = v[i] + v[n-1];
            ans = max(ans, s1);
            ans = max(ans,s2);
        }
        cout<<ans<<endl;
        return;
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
