/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 07 2025 2:40:15 AM
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
    ll n,m; cin>>n>>m;
    vector<ll>a(n),b(m);
    for(auto &e:a) cin>>e;
    for(auto &f:b) cin>>f;
    srt(a);
    vector<ll>ans;
    for(ll i=0; i<m; i++)
    {
        ll item = b[i];
        auto it = upper_bound(a.begin(), a.end(), item);
        if(it==a.end()) 
        {
            if(item<a[0])ans.pb(0);
            else ans.pb(n);
        }
        else{
            ll ind = it-a.begin();
            ans.pb(ind);
        }

    }
    for(auto &g:ans)
    {
        cout<<g<<" ";
    }
    cout<<endl;
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
