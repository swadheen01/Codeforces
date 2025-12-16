/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 23 2025 8:53:00 PM
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

    if(n==2)
    {
        if(abs(v[0]-v[1])>1)
        {
            cout<<-1<<endl;
            return;
        }
        cout<<0<<endl;
        return;
    }
    for(ll i=0; i<n-1; i++)
    {
        if(abs(v[i]-v[i+1])<=1)
        {
            cout<<0<<endl;
            return;
        }
    }
    bool can=false;
    for(ll i=0;i+1<n;++i){
        ll L=min(v[i],v[i+1]);
        ll R=max(v[i],v[i+1]);
        if(i-1>=0){
            ll x=v[i-1];
            if(R>=x-1 && L<=x+1){
                can=true;
                break;
            }
        }
        if(i+2<n){
            ll x=v[i+2];
            if(R>=x-1&&L<=x+1){
                can=true;
                break;
            }
        }
    }
    if(can)
    {
        cout<<1<<endl;
        return;
    }

    // if(z)
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    // if(on)
    // {
    //     cout<<1<<endl;
    //     return;
    // }

    // if(ans==1e18)
    // {
    //     cout<<-1<<endl;
    //     return;
    // }
    cout<<-1<<endl;
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
