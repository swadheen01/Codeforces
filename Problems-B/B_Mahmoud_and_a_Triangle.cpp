/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 17 2024 10:38:44 PM
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
    ll n; cin>>n;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++)
    {
        ll x; cin>>x;
        vec[i] = x;
    }
    sort(vec.begin(), vec.end());
    for(ll i=0; i<n-2; i++)
    {
        ll a = vec[i], b = vec[i+1], c = vec[i+2];
        if(a+b>c && b+c>a && a+c>b){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
