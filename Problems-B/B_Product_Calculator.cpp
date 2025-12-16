/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 17 2025 6:04:08 PM
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

ll cnt(ll n)
{
    ll a = 0;
    while(n>0)
    {
        n/=10;
        a++;
    }
    return a;
}

void sir()
{
    // int y
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    ll ans = 1;
    for(auto &e:v)
    {
        ans = ans*e;
        //string s = to_string(ans);
        if(cnt(ans)>=k+1)
        {
            ans = 1;
        }
    }
    
    if(cnt(ans)>=k+1) cout<<1<<endl;
    else cout<<ans<<endl;
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
