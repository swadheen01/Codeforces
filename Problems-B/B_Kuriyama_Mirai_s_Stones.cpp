/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Nov 13 2024 11:10:10 PM
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
    ll n; cin>>n;
    vector<ll>v(n+1),a(n+1);
    for(ll i=1; i<=n; i++)
    {
        cin>>v[i]; a[i]=v[i];
    }
    for(ll i=1;i<=n; i++)
    {
        v[i] += v[i-1];
    }
    srt(a);
    
    for(ll i=1;i<=n; i++)
    {
        a[i] += a[i-1];
    }
    ll q; cin>>q;
    while(q--)
    {
        int ty; cin>>ty;
        ll l,r; cin>>l>>r; l--;
        //pref er l need,but r-- needed
        ll ans;
        if(ty==1){
            ans = v[r] - v[l];
        }
        else ans = a[r] - a[l];
        cout<<ans<<endl;
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
