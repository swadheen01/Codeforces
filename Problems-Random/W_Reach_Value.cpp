/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 3:02:09 AM
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
ll c = 0;
void way(ll a,ll b, bool &ok)
{
    if(a>b) return ;
    if(a==b)
    {
        ok = true;
        return;
    }

    a = a*10;
    way(a, b,ok);
    a= a/10;

    a = a*20;
    way(a,b,ok);
    a= a/20;


}

void sir()
{
    ll a,b; cin>>b; 
    a = 1;
    bool ok = false;
    way(a,b, ok);

    if(ok)yes;
    else no;
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
