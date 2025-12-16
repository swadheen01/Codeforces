/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 2:41:29 AM
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

ll sum(vector<ll>&v, ll i, ll s)
{
    if(i==v.size()-1) return s+v[i];
    return sum(v, i+1, s+v[i]);
}

void sir()
{
    ll n; cin>>n;
    vector<ll>v(n); for(auto &e:v) cin>>e;
    
    cout<<sum(v, 0, 0)<<endl;;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    ll x = 1; 
    while(x<=t)
    {
        cout<<"Case "<<x<<": ";
        sir();
        x++;
    }
    return 0;
}
