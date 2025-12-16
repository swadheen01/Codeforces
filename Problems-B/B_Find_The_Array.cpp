
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Feb 08 2025 11:14:25 PM
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

void sirWrong()
{
    ll n;cin>>n;
    vector<ll>a(n);
    ll s= 0;
    for(auto &e:a)
    {
        cin>>e;
        s+=e;
    }
    ll b = s/n;
    while(n--)
    {
        cout<<b<<" ";
    }cout<<endl;
}
void sirAC()
{
    ll n; cin>>n;
    vector<ll>a(n);
    ll s=0, s2 = 0, sum =0;
    for(ll i=0; i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(i&1) s+=a[i];
        else s2+=a[i];
    }
    if(s>sum/2)
    {
        for(ll i=0; i<n; i++)
        {
            if(i&1) cout<<a[i]<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        for(ll i=0; i<n; i++)
        {
            if(i&1) cout<<1<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
void sir()
{
    ll n; cin>>n;
    vector<ll>a(n);
    ll s=0, s2 = 0, sum =0;
    for(ll i=0; i<n;i++)
    {
        cin>>a[i];
        ll x = 1;
        while(2*x<=a[i]) x*=2;
        cout<<x<<" ";
    }
    cout<<endl;
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
