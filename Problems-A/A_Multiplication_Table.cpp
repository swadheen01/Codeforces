/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 10 2024 12:00:10 AM
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
    ll n,x; cin>>n>>x;
    ll c = 0;
    for(ll i=2; i<= n; i++)
    {
        if(x%i==0 && ((x/i)<=n)) c++;
    }
    if(x==1) {cout<<1<<endl; return;}
    if(n>=x && n!=1) c++;
    
    cout<<c<<endl;
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
