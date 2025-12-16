/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue May 20 2025 9:02:16 PM
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
    ll p = 0;
    for(auto &e:v)
    {
        cin>>e;
        p += e;
    }
    sort(v.begin(), v.end());

    ll m; cin>>m;
    while(m--)
    {
        ll sum=p;
        ll d, a; cin>>d>>a;
        
        ll ind = lower_bound(v.begin(), v.end(),d)-v.begin();
        
        ll ans = 2e18;
        ll att;
        if(ind>0) 
        {
            att = v[ind-1];
            ans = min(ans, (d-att) + max(0ll, a-p+att));
        }
        if(ind<n)
        {
            att = v[ind];
            ans = min(ans, max(0ll,a-p+att));
        }
        
       // cout<<att<<" "<<sum<<" ";
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
