/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Nov 27 2024 11:16:38 PM
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
    ll x = sqrt(n/2);
    ll y = sqrt(n/4);

    if((n%2==0 && x*x == n/2) || (n%4==0 && y*y==n/4)){ //2x or 4x where x = square num
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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
