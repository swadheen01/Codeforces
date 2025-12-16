/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 24 2025 1:04:43 PM
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
    ll n,q; cin>>n>>q;
    vector<ll>v(n+1);
    vector<ll>ps(n+1);
    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
        v[i] = v[i]+v[i-1];
        //cout<<ps[i]<<" ";
    }
    vector<ll>k(q); for(auto &e:k) cin>>e;
    ll ind = 0;
    ll ans = n;
    ll x = 0;
    ll in = 1;
    ll baki = 0;
    while(q--)
    {
        ll st = k[ind]; ind++;
        int lo=in, hi=n, mid, ans=in-1;
        while(lo<=hi)
        {
            mid = (lo+hi)/2;
            ll sum = v[mid]-v[in-1]-baki;
            if(sum <= st)
            {
                ans = mid;
                lo = mid+1;
            }else hi = mid-1;
        }
        
        baki = (st - (v[ans]-v[in-1]-baki));
    
        in = ans + 1;
        if(in>n) in = 1, baki = 0;
        cout<<n-in+1<<endl;
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
