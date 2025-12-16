/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Aug 06 2025 11:50:30 PM
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
    ll x; cin>>x;

    ll a = 0, b = 0, c = 0;

    ll ans = 0;
    while(min(a,min(b,c))<x)
    {
        if(a<=b && a<=c) a = min(b,c) * 2 + 1;
        else if(b<=a && b<=c) b = min(a,c) * 2 + 1;
        else c = min(a,b) * 2 + 1;
        ans++;
    }
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
