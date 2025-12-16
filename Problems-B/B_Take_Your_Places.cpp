/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jun 22 2025 6:58:07 PM
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
    vector<ll>v(n);
    for(auto &e:v) cin>>e;

    if(n==1)
    {
        cout<<0<<endl;
        return;
    }

    ll cntod = 0, cntev = 0;
    for(auto &e:v)
    {
        cntod += (e%2);
        cntev += (e%2==0);
    }
    if(n%2==0 && cntod != cntev)
    {
        cout<<-1<<endl;
        return;
    }
    if(n%2==1 && abs(cntod-cntev) != 1)
    {
        cout<<-1<<endl;
        return;
    }

    vector<ll>od,ev;
    for(ll i=0;i<n;i++)
    {
        if(v[i]%2==0)  ev.pb(i);
    }

    for(ll i=0; i<n; i+=2)
    {
        od.pb(i);
    }
    ll ans = 0, ans2 = 0;
    int ok = 0;
    if(ev.size()==od.size())
    {
        ok = 1;
        
        for(ll i=0; i<od.size();i++)
        {
            ans += abs(ev[i]-od[i]);
        }
        
    }
    ll ind = 0;
    vector<ll>od2;
    for(ll i=1; i<n; i+=2)
    {
        od2.pb(i);
    }
    int ok2 = 0;
    if(od2.size()==ev.size())
    {
        ok2 = 1;
        for(ll i=0; i<od2.size();i++)
        {
            ans2 += abs(ev[i]-od2[i]);
        }
    }
    // cout<<ans<<" "<<ans2<<endl;
    // cout<<ok<<">"<<ok2<<endl;
    if(ok==0 && ok2==0)
    {
        cout<<-1<<endl;
        return;
    }
    if(ok==1 && ok2==1) 
    {
        cout<<min(ans,ans2)<<endl; return;
    }
    if(ok)
    {
        cout<<ans<<endl;
        return;
    }
    cout<<ans2<<endl;
    return;
    


}
void sir2()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    ll ans = 1e18;
    for(ll r=0; r<2; r++)
    {
        vector<ll>x,y;

        for(ll i=r; i<n; i+=2) x.pb(i);
        for(ll i=0; i<n; i++)
        {
            if(v[i]%2==0) y.pb(i);
        }

        ll cnt = 0;
        if(x.size()==y.size())
        {
            for(ll i=0; i<x.size(); i++)
            {
                cnt += abs(x[i]-y[i]);
            }
            ans = min(ans,cnt);
        }
    }
    if(ans==1e18)
    {
        cout<<-1<<endl;
        return;
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
