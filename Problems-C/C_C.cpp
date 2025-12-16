/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jan 20 2025 3:02:09 PM
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
    if(n&1){
        cout<<(n/2)<<endl;
        for(ll i=1; i+1<=(n/2); i++) cout<<2<<" ";
        cout<<3<<endl;
    }
    else{
        cout<<n/2<<endl;
        for(ll i=1; i<=n/2; i++) cout<<2<<" ";
    }
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
