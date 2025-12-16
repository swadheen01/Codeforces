/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 16 2025 1:15:33 AM
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

// ll poww(ll a, ll p)
// {
//     if(p==0) return 1;
//     ll temp = po(a,p/2);
//     temp*=temp;
//     temp%=mod;
//     if(p%2) temp*=a;
//     return temp%mod;
// }
ll po(ll a,ll p)
{
    if(a==0) return 0;
    ll res = 1;
    while(p>0)
    {
        if(p&1) res = (res*a)%mod;
        a*=a; a%=mod;
        p = p>>1;
    }
    return res;
}

void sir()
{
    ll n; cin>>n;;
    ll other = (1ll<<n)-2;
    ll ans = po(4,other);
    ans = (ans*6)%mod;
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
