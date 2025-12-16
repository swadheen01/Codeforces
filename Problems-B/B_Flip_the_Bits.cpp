/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri May 02 2025 5:04:53 AM
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
    ll n;cin>>n;
    string a,b; cin>>a>>b;
    if(a==b)
    {
        yes; return;
    }
    ll c1 = 0, c0 = 0 ;
    a.pb('0'); b.pb('0');
    for(ll i=0; i<n; i++)
    {
        if(a[i]=='1') c1++;
        else c1--;

        if((a[i]==b[i]) != (a[i+1]==b[i+1]) && c1 !=0)
        {
            no;return;
        }

    //     if(a[i]==b[i])
    //     {
    //         if(c1 != c0)
    //         {
    //             no; return;
    //         }
    //         else{
    //             c1 = c0,c0=c1;
    //         }
    //     }
    //     else{
    //         if(a[i]=='1') c1++;
    //         else c0++;
    //     }
    // }
    // if(c1!=c0)
    // {
    //     no; return;
    }
    yes; return;
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
