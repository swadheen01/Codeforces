/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 14 2024 2:56:58 AM
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
    ll n,x; cin>>n>>x;
    vector<ll>v(n);
    ll tot = 0;
    ll mx = 0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        tot+=v[i];
        mx = max(mx,v[i]);
    }

    ll ans = max((tot+x-1)/x , mx); //ceil and mx car
    cout<<ans<<endl;

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
