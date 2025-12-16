/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 22 2024 8:38:20 PM
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
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    for(auto &e:a) cin>>e;
    for(auto &d:b) cin>>d;
    // ll ans = a[n-1];
    // ll sum = a[n-1];
    // for(ll i=n-2; i>=0; i--)
    // {
    //     sum+=a[i];
    //     ans = max(ans,sum-b[i+1]);
    // }
   ll sum1 = 0, sum2 = 0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]>=b[i+1]) sum1+=a[i], sum2+=b[i+1];
        
    }
    sum1+=a[n-1];
    ll ans = sum1-sum2;
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
