/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Feb 01 2025 11:37:28 PM
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
    ll n; cin>>n;
    vector<ll>v(n);
    ll mn = 2e9+10, ind = -1;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]<mn) mn = v[i], ind = i;
    }
    cout<<n-1<<endl;
    for(ll i=0; i<n;i++)
    {
        if(i==ind) continue;
        else{
            cout<<ind+1<<" "<<i+1<<" "<<mn<<" "<<mn+abs(i-ind)<<endl;
        }
    }
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
