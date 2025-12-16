/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Dec 12 2024 12:12:00 AM
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
const ll mx = 1e18;

vector<bool> seive(ll n) {
    vector<bool> comp(n+1, false);
    comp[0] = comp[1] = true;

    for (ll i = 2; i <= n; ++i) {
        if(comp[i]) continue;
        
        for (ll j = i + i; j <= n; j += i) {
            comp[j] = true;
        }
    }
    return comp;
}

void sir()
{
    
    ll x; cin>>x;
    ll n = 1000000;
    vector<bool>v= seive(n);
    for(ll i=x; i<1000000;i++)
    {
        if(!v[i]){
            cout<<i<<endl;
            return;
        }
    }
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
