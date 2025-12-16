/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Dec 06 2024 4:57:11 PM
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
    ll a,b,c; cin>>a>>b>>c;
    if(a==b && c%2==0 || b==c && a%2==0 || a==c && b%2==0){
        cout<<"YES\n";
    }
    else if(a+b==c || b+c==a || a+c==b){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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
