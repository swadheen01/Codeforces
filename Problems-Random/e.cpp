/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 24 2025 11:06:17 AM
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
    ld n,w; cin>>n>>w;
    ld ans;
   
    vector<ll>v(n*2);for(auto &e:v) cin>>e;
    srt(v);

    ld z= (ld) (min(v[0]*2, v[n]))/2;
    ans = n*z*3;
    //ans += (n*z);
    cout<<fixed<<setprecision(10)<<min(ans,w)<<endl;
    
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
