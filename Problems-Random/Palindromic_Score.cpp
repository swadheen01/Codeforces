/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Apr 16 2025 9:59:36 PM
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
    ll ans = 0;
    ll one = min(min(a,b),c);
    ll two = ((a+b+c)-(max(a,max(b,c))))-one;
    if(one%2 & two%2)
    {
        ans = (one+two);
        ans--;
    }
    else ans = one + two;
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
