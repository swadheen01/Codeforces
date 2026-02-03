/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 10 2024 11:02:59 PM
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


ll solve(ll n, ll b, ll c) {
    if(b==(ll)0 && c==(ll)0) return -1;
    if(n==b && b==c) return n;
    
    // if (b == 0) {
    //     if (c >= n) {
    //         return -1;
    //     }
    //     return (c == 0) ? -1 : 1;
    // }
    if(c==(ll)1){
        ll x = (n+1)/b;
        return x;
    }

    ll mx = b * (n - 1) + c;
    if (mx >= n) {
        return -1;
    }
    
    ll op = 0;
    ll val = mx;
    while (val >= n) {
        op++;
        val = n - 1;
    }

    return op;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, b, c;
        cin >> n >> b >> c;
        cout << solve(n, b, c) << endl;
    }
    return 0;
}
