/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 15 2024 11:52:30 PM
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
//#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);
//const int MOD = 1e9 + 7;
ll mod = 1e9+7;
ll Pow(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    ans += mod;
    ans %= mod;
    return ans;
}
void sir()
{
    // int y
    ll n; cin>>n;
    vector<pair<ll,ll>> v(n);

    
    for(ll i=0;i<n;i++) cin >> v[i].first;
    for(ll i=0;i<n;i++) cin >> v[i].second;

 
    for(ll i=0;i<n;i++)
    {
        cout<<(Pow(2,v[i].second))<<endl;
    }
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
