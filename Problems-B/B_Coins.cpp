/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Feb 10 2025 11:25:26 PM
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

void sir2()
{
    ll n; cin>>n;
    
    if(n==1) {cout<<1; return;}
    vector<ll>v;
    v.pb(n);
    if(n&1)
    {
        // while(n!=1 && sqrt(n)*sqrt(n)==n)
        // {
        //     n = sqrt(n);
        //     v.pb(n);
            
        // }
        // ll i = sqrt(n);
        // while(n%i==0)
        // {
        //     cout<<i<<" ";
        //     n/=i;

        // }
        for(ll i=sqrt(n); i>=1; i--)
        {
            if(n%i==0){
                v.pb(i);
                v.pb(n/i);
                n/=i;
            }
        }
        // cout<<1<<" ";
        // cout<<endl;
    }
    else{
        while(n%2==0)
        {
            n = n/2;
            v.pb(n);
        }
        
        for(ll i=sqrt(n); i>=1; i--)
        {
            if(n%i==0){
                v.pb(i);
                v.pb(n/i);
                n/=i;
            }
        }
        while(n!=1 && sqrt(n)*sqrt(n)==n)
        {
            n = sqrt(n);
            v.pb(n);
        }
        

    }
    rsrt(v);
    v.erase(unique(v.begin(), v.end()), v.end());
    for(ll i=0; i<v.size(); i++) cout<<v[i]<<" ";
}
void sir()
{
    ll n; cin>>n;
    cout<<n;
    for(ll i=2; i<=n; i++)
    {
        while(n%i==0) cout<<" "<<(n/=i);
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
