/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 04 2024 10:09:26 PM
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
    for(ll i=0; i<n;i++) cin>>v[i];
    ll sum = 0;
    for(auto e:v) sum+=e;
    srt(v);
    ll sum2 = max(v[n-1], (sum+1)/2);
    if(n==1) cout<<sum<<" "<<sum<<endl;
    else cout<<sum2<<" "<<sum<<endl;
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
