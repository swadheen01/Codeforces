/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jan 26 2025 3:14:29 PM
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
#define co cout
const ll x = 1e7+10;
vector<bool> isp(x + 1, true);

// void sieve(ll x) {
    
//     isp[0] = isp[1] = false;
//     for (ll i = 2; i * i <= x; ++i) {
//         if (isp[i]) {
//             for (ll j = i * i; j <= x; j += i) {
//                 isp[j] = false;
//             }
//         }
//     }

//}
void sir(ll n)
{
    isp[0] = isp[1] = false;
    for (ll i = 2; i * i <= x; ++i) {
        if (isp[i]) {
            for (ll j = i * i; j <= x; j += i) {
                isp[j] = false;
            }
        }
    }
    vector<ll>ans;
    ll cn = n;
    for(ll i=11; i<x; i++)
    {
        if(isp[i] && cn){
            if(i%10==1) {
                ans.pb(i); cn--;
            }
        }
    }
    for(auto &e:ans){
        co<<e<<" ";
    }
}

int main() {
    ALLAHU_AKBAR

    ll n; cin>>n;
    sir(n);
    return 0;
}
