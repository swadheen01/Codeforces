/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jan 31 2025 12:15:20 PM
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
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    sort(v.begin(), v.end());
    ll q; cin>>q;
    while(q--)
    {
        ll l,r; cin>>l>>r;
        auto it = lower_bound(v.begin(), v.end(),l);
        auto it2 = upper_bound(v.begin(), v.end(), r);

        
        if(it != v.end() && it2 != v.end())
        {
            ll ind1 = it-v.begin(); ll ind2 = it2-v.begin();
            cout<<ind2-ind1<<" ";
            continue;
           
        }
        if(it2 ==v.end())
        {
            ll ind1 = it-v.begin(); //ll ind2 = it2-v.begin();
            cout<<n-ind1<<" ";
            continue;
        
        }
        else{
            cout<<0<<" ";
           
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
