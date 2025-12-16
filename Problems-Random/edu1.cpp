/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jul 14 2025 8:30:37 PM
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
    // Bismillahir Rahmanir Rahim 

    ll n;cin>>n;
    ll ev = 2;
    ll od = 1;
   
    if(n%2)
    {
        for(ll i=1; i<=n-2; i++)
        {
            if(i%2) cout<<ev<<" ", ev += 2;
            else cout<<od<<" ", od += 2;
        }
        cout<<od+2<<" "<<od<<endl;
        return;
    }

    for(ll i=1; i<=n; i++)
    {
        if(i%2) cout<<ev<<" ", ev += 2;
        else cout<<od<<" ", od += 2;
    }cout<<endl;
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
