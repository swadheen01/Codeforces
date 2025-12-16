/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Sep 18 2024 11:46:06 PM
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
    ll n,m; cin>>n>>m;
    if(m%n != 0) {cout<<-1<<endl;return;}
    ll x = m/n;

    ll move = 0;
    while(x%2==0){
        move++;
        x/=2;

    }
    while(x%3==0)
    {
        move++;
        x/=3;
    }
    if(x!=1){cout<<-1<<endl;return;}
    else 
    cout<<move<<endl;
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
