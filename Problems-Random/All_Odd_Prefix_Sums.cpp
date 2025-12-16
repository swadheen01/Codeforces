/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 30 2025 8:34:07 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    ll n; cin>>n;
    vector<ll>v(n);
    ll od = 0, ev = 0;
    for(auto &e:v){
        cin>>e;
        if(e%2) od++;
        else ev++;
    }
    if(od>1 || od==0)
    {
        no;
        return;
    }
    yes;
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
