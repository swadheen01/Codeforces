/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 14 2024 9:16:51 PM
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
    ll n,m,q; cin>>n>>m>>q;
    ll b[m];
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }
    ll mn = min(b[0], b[1]);
    ll mx = max(b[0], b[1]);
    ll dev[1];
    cin>>dev[0];
    ll ans;
    ll d = dev[0];
    // for(ll i=0; i<m; i++)
    // {
    //     if(abs(b[i]-dev[0])<ans) ans = abs(b[i]-dev[0]);
    // }
    // if(d>mn && d<mx)
    // {
        
    // }
    // ans = min(abs(mn-d), abs(mx-d));

    if(d<mn) ans = mn-1;
    else if(d>mx) ans = n-mx;
    else{
        ll x = (mn+mx)/2;
        // if((mn+mx)%2) x = x+1;
        ans = min(abs(x-mn), abs(x-mx));
    }

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
