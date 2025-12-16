/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 03 2025 3:16:48 AM
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
    vector<ll>v(n); for(auto &e:v) cin>>e;

    ll ans = 1;

    ll c = 1;
    vector<ll>dp(n);
    dp[0] = 1;
    for(ll i=1; i<n; i++)
    {
        if(v[i]<v[i-1]){
            dp[i] = dp[i-1] + i + 1;
            ans+=dp[i];
        }
        else{
            dp[i] = dp[i-1] + 1;
            ans+=dp[i];
        }
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
