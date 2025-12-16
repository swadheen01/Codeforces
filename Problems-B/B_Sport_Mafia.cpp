/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Nov 26 2024 1:01:15 AM
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
    ll n,k; cin>>n>>k;
    ll lo = 0, hi = n+1, mid, x;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        ll sum = (mid*(mid+1)/2)-(n-mid);
        if(sum>k){
            hi = mid;
        }
        else if(sum<k){
            lo = mid;
        } else{
            x = mid;break;
        }
    }
    cout<<n-x<<endl;
}

int32_t main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
