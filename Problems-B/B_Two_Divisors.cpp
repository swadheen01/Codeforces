/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jan 03 2025 11:47:18 PM
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

bool chk(ll b, ll x, ll a) {
    for (ll i = a + 1; i < x; ++i) {
        if (b % i == 0) return false;
    }
    return true;
}

void sir() {
    ll a, b;
    cin>>a>>b;

    if(b%a==0){
        cout<<(b/a)*b<<endl;
    }
    else{
        cout<<(b*a)/__gcd(a,b)<<endl;
    }
}

int main() {
    ALLAHU_AKBAR
    ll t;
    cin >> t;
    while (t--) {
        sir();
    }
    return 0;
}
