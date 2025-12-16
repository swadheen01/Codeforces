/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Sep 13 2024 10:27:33 PM
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
    ll a,b; cin>>a>>b;
    if(b==1) {cout<<"NO"<<endl;return;}

    else{
    cout<<"YES"<<endl;
    cout<<a*b<<" "<<a<<" "<<a + (a*b)<<endl;
    }
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
