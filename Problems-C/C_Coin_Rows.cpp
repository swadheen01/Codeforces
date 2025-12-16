/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jan 29 2025 11:39:45 PM
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
    vector<vector<ll>>v(2,vector<ll>(n));
    for(ll i=0; i<2;i++)
    {
        for(ll j=0; j<n; j++) cin>>v[i][j];
    }
    ll ans = 2e9+10;
    ll s1 = 0, s2 =0;
    for(ll i=0; i<n; i++) s1 += v[0][i];
    for(ll i=0; i<n; i++){
        s1-=v[0][i];
        ans = min(ans, max(s1,s2));
        s2 += v[1][i];
    }
    cout<<ans<<endl;
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
