/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 10 2025 10:00:50 PM
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
    ll n;
    cin >> n;
        
    vector<ll> a(n), b(n);
    for(auto &e:a) cin>>e;
    for(auto &e:b) cin>>e;

    if(a[n-1] != b[n-1]) {
        no;
        return;
    }
    for(ll i = n-2; i >= 0; i--) 
    {
        ll op1= a[i], op2 = a[i]^a[i+1];
        ll op3 = a[i]^b[i+1];
        if(b[i] != op1 && b[i] != op2 && b[i] != op3) {
            no;
            return;
        } 
    
    }
    yes;
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
