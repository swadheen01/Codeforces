/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat May 24 2025 6:49:27 PM
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
    ll x,y; cin>>x>>y;
    vector<pair<ll,ll>>v;
    for(ll i=1; i<=6; i++)
    {
        for(ll j=1; j<=6; j++)
        {
            v.pb({i+j, abs(i-j)});
        }
    }
    //for(auto e:v) cout<<e.second<<" ";
    ld n = v.size();
    ld cnt = 0;
    for(ll i=0; i<n; i++)
    {
        if(v[i].first>=x || v[i].second>=y) cnt++;
    }
    //cout<<cnt<<" "<<n<<endl;
    ld p = cnt/n;
    cout<<fixed<<setprecision(10)<<p<<endl;

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
