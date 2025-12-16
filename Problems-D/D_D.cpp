/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jan 20 2025 2:16:46 PM
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
const int x = 1000000;
vector<bool>comp(x+1);
void seive()
{
    for(int i=2; i<=x; i++)
    {
        if(comp[i]) continue;
        for(int j=i+i; j<=x; j+=i) comp[j] = true;
    }
}

void sir()
{
    ll n; cin>>n;
    ll sq = sqrtl(n);
    if(n<=3 || sq*sq != n) no;
    else{
        if(!comp[sq]) yes;
        else no;
    }
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    seive();
    while(t--)
    {
        sir();
    }
    return 0;
}
