/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 17 2024 11:28:01 PM
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

void sir2()
{
    ll n; cin>>n;
    long double ans = ((n*n)+5) * static_cast<double>(n)/6.0;
    cout<<fixed<<setprecision(0)<<ans<<endl;
}

void sir()
{
    // int y
    ll n; cin>>n;
    ll ans = n;
    ll ext = n-1;
    for(int i=1; i<n; i++)
    {
        ans += i*ext;
        ext--;
    }
    cout<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
