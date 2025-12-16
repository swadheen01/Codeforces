/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 15 2024 12:13:02 AM
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
    string s; cin>>s;
    ll one=0, z = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='0') z++;
    }
    string r = s;
    reverse(r.begin(), r.end());
    if(s==r){
        if(z==1){
            cout<<"BOB\n";
            return;
        }
        if(z%2==1){
            cout<<"ALICE\n";
            return;
        }
        
        cout<<"BOB\n";
        return;
    }
    
    if(n%2==1 && z==2 && s[n/2]=='0'){
        cout<<"DRAW\n";
        return;
    }
    cout<<"ALICE\n";
    return;
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
