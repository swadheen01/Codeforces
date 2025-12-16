/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Aug 01 2025 2:42:48 AM
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

ll n, m, k;

ll f(ll x) {
  ll cnt = 0;
  for (ll i = 1; i <= m; i++) {
    cnt += min(n, x / i);
  }
  return (cnt < k);
}
void sir(){
    ll n;
    cin>>n;
    if(n==1)cout<<"1";
    if(n==2)cout<<"2";
    if(n==3)cout<<"6";
    if(n==4)cout<<"12";
    if(n>4){
        if(n%2)cout<<(n*(n-1)*(n-2));
        else cout<<max(((n-3)*(n-1)*(n-2)),(n*(n-1)*(n-3))/gcd(n,n-3));
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
