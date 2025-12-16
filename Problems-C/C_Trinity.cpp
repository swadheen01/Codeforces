/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 22 2024 9:27:19 PM
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

ll binary(vector<ll>&v, ll x, ll n,ll i)
{
    ll lo = i, hi = n-1, mid, ind;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        if(x>v[mid]){
            ind = mid;
            lo = mid + 1;
        }
        else hi = mid-1;
    }
    return ind;

}

void sirTLEin11()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    srt(v);
    ll c = 0;
    ll ans = n;
    for(ll i=0; i<n-1; i++)
    {
        ll x = v[i] + v[i+1];
        ll size = binary(v,x,n,i)-i+1 ; //size of the correct subarray
        ans = min(ans, n-size); // n-size means, they have to be changed
    }
    cout<<ans<<endl;
    
}

void sir()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    srt(v);
    ll c = 0;
    ll ans = n;
    for(ll i=0; i<n-1; i++)
    {
        ll x = v[i] + v[i+1];
        ll lo = i, hi = n-1, mid, ind;
        while(lo<=hi)
        {
            mid = (lo+hi)/2;
            if(x>v[mid]){
                ind = mid;
                lo = mid + 1;
            }
            else hi = mid-1;
        }
        ans = min(ans, n-(ind-i+1)); // n-ind-i+1 means, they have to be changed
    }
    cout<<ans<<endl;
    
}
int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sirTLEin11();
    }
    return 0;
}
