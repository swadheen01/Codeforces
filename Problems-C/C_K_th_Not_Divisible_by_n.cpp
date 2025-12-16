/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 11 2024 10:37:39 PM
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
    cout<<k+(k-1)/(n-1)<<endl;
}
void binary()
{
    ll n,k; cin>>n>>k;
    ll lo=1, hi = 1e12, mid, ans;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        if((mid - mid/n)<k) lo = mid+1;
        else{
            ans = mid;
            hi = mid-1;
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
        //sir();
        binary();
    }
    return 0;
}
