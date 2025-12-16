/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 23 2025 1:19:38 AM
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
    string s; cin>>s;
    for(ll i=1; i<n; i++)
    {
        char c = s[i];
        if((c-'0')%2)
        {
            no; return;
        }
    }

    for(ll d = 3; d<=n; d++)
    {
        for(ll i=0; i<n-d+1; i++)
        {
            string x = s.substr(i,d);
            ll num = stol(x);
            if(num%d)
            {
                no;
                //cout<<d<<endl;
                return;
            }
        }
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
