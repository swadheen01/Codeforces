/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jun 26 2025 10:26:45 PM
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
    ll a,b,c; cin>>a>>b>>c;
    ll ans = max(0ll, (b+c-a+2)/2);
    // if(a>b)
    // {
    //     ans = c/2+1;
    // }
    // else{
    //     c-= (b-a);
    //     if(c==0) ans = 0;
    //     else ans = c/2;
    // }
    ans = max(0ll, c-ans+1);
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
