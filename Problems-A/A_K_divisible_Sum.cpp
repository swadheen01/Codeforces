/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Sep 10 2024 2:16:48 AM
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

// void sir1()
// {
//     ll n,k; cin>>n>>k;
//     if(k==1) cout<<1<<endl;
//     else if((max(n,k)%min(n,k))==0) cout<<(max(n,k)/min(n,k)) <<endl;
//     else
//     cout<<(max(n,k)/min(n,k)) + 1<<endl;
// }
void sir()
{
    ll n,k; cin>>n>>k;
    ll cons = (n+k-1)/k;
    ll ans = (cons*k + n-1)/n;
    cout<<ans<<endl;
}
void sir1()
{
    ll n,k; cin>>n>>k;
    ll ans;
    if(k<n)
    {
        if(n%k==0) ans=1;
        else ans=2;
    }
    else
    {
        if(k%n==0) ans=k/n;
        else ans= (k/n)+1;
        
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
