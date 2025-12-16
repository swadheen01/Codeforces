/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 24 2024 5:56:49 PM
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
    ll w,b; cin>>w>>b;
    ll sum = w+b;
    ll lo=0, hi = 2e9, mid, res;
    while(lo<=hi)
    {
        mid = (hi-lo)/2 + lo;
        ll ans = ((mid+1)*mid)/2;
        if(ans<=sum){
            res = mid;
            lo = mid+1;
        }
        else if(ans>sum){
            hi = mid-1;
        }
        
    }
    cout<<res<<endl;
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
