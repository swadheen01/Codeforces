/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 17 2025 12:51:20 AM
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
    ll n,k; cin>>n>>k; string s; cin>>s;
    map<char,ll>cnt;
    for(auto &c:s)cnt[c]++;
    ll pr=0,od = 0;
    for(auto [a,c]:cnt)
    {
        pr += (c/2);
        od += c%2;
    }
    ll ans = 2 * (pr/k);
    od += 2*(pr%k);
    if(od>=k) ans++;
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
