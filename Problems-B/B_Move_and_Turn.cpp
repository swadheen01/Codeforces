/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue May 20 2025 3:11:01 AM
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

vector<ll>v(1001);

void sir()
{
    // int y
    ll a = 1, b = 2, c = 2, d=2;
    for(ll i=1; i<1001; i++)
    {

        if(i%2)
        {
            v[i] = 2 * (a*b); 
            a++, b++;
        }
        else
        {
            v[i] = c*d;
            c++, d++;
        }
    }
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    sir();
    while(t--)
    {
        ll n; cin>>n; cout<<v[n]<<endl;
    }
    return 0;
}
