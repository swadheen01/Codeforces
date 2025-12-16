/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jan 20 2025 1:56:03 AM
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
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &a:v) cin>>a;

    if(v[0]>v[1])
    {
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=0; i<n-1; i++)
    {
        ll x = min(v[i], v[i+1]);
        v[i]-=x;
        v[i+1]-=x;
    }
    for(ll i=0; i<n-1; i++){
        if(v[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    yes;

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
