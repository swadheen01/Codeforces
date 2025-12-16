/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 17 2024 10:16:13 PM
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
    ll n,m,l; cin>>n>>m>>l;
    ll c = 1; // c to l
    vector<pair<ll,ll>>h,p;
    while(n--)
    {
        ll x,y; cin>>x>>y;
        h.pb({x,y});
    }
    while(m--)
    {
        int x,y; cin>>x>>y;
        p.pb({x,y});
    }
    // for(auto a:p)
    // {
    //     cout<<a.first<<" "<<a.second<<endl;
    // }
    

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
