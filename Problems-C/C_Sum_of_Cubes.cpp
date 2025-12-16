/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 28 2024 6:03:59 PM
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
const ll N = 1'000'000'000'000L;

unordered_set<ll>cubes;
void calc()
{
    for(ll i=1; i*i*i<=N; i++)
    {
        cubes.insert(i*i*i);
    }
}

void sir()
{
    // int y
    ll n; cin>>n;
    for(ll i=1; i*i*i<=n; i++)
    {
        if(cubes.count(n-i*i*i))
        {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main() {
    ALLAHU_AKBAR

    calc();
    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
