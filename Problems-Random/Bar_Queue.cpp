/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Apr 16 2025 8:31:18 PM
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
  
    ll n; cin>>n; string s;cin>>s;
    ll cnt = 0; ll g = 0, b = 0;
    for(auto &c:s)
    {
        if(c=='G')g++, cnt++;
        else if(c=='B')
        {
            b++; cnt++;
            if(b>(2*g))
            {
                break;
            }
        }
    }
    cout<<cnt<<endl;
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
