/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Dec 03 2024 12:41:41 AM
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
    ll n; char c; cin>>n>>c;
    string s; cin>>s;
    s+=s;
    if(c=='g'){
        cout<<0<<endl; return;
    }
    vector<ll>gi;
    for(ll i=0; i<2*n; i++)
    {
        if(s[i]=='g') gi.pb(i);
    }
    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]==c)
        {
            ll chk = lower_bound(gi.begin(), gi.end(), i)-gi.begin();
            ans = max(ans, gi[chk]-i);
        }
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
