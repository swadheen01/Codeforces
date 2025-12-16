/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue May 13 2025 9:28:32 PM
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
    ll n,k; cin>>n>>k;
    string s(n,'a');
    for(ll i=n-2; i>=0; i--)
    {
        if(k<=n-i-1)
        {
            s[i] = 'b';
            s[n-k] = 'b';
            cout<<s<<endl;
            return;
        }
        k-=(n-i-1);
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
