/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 24 2025 9:55:10 AM
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
    ll tk; cin>>tk;
    ll a,b,c; cin>>a>>b>>c;
    ll cnt = 0;
    ll tkk = tk;
    cnt = max(0ll, (tk-b)/(b-c));
    ll baki = tk-cnt*(b-c);
    if(baki>=b)
    {
        baki -= (b-c);
        cnt++;
    }
    cnt += (baki/a);
    
    ll ect = tkk/a;
    cout<<max(cnt,ect)<<endl;
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
