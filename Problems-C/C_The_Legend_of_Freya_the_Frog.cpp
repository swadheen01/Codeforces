/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Sep 19 2024 7:55:33 PM
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
    ll x,y,k,ans; cin>>x>>y>>k;

    ll dx = (x+k-1)/k;
    ll dy = (y+k-1)/k;
    if(dy>=dx) ans = dy*2;
    else ans = dx*2 - 1; //cause last y jump not needed

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
