/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Nov 28 2024 12:36:51 AM
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
    vector<ll>a(n);
    for(auto &e:a) cin>>e;
    rsrt(a);
    ll ind = 0;
    ll c =0;
    ll min = a[n-1];
    for(ll i=0; i<n-1; i++)
    {
        c++;
        if(c<=n/2) cout<<a[i]<<" "<<min<<endl;
        else return;
    }
    // for(ll i=0; i<n; i++)
    // {
    //     if(a[i]%a[n-i-1]==0)
    //     {
    //         c++;
    //         if(c<=n/2) cout<<a[i]<<" "<<a[n-i-1]<<endl;
    //         //else return;
    //     }
        
    // }
    // //ll val = a[ind];
    // for(ll i=n-1; i>=0; i--)
    // {
    //     ll x = a[ind]%a[i];
    //     auto it = find(a.begin(), a.end(),x);
    //     if(it != a.end()){
    //         c++;
    //         if(c<=n/2) cout<<a[i]<<" "<<a[i+1]<<endl;
    //         //else return;
    //     }
    // }
    // cout<<"c is "<<c<<endl;

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
