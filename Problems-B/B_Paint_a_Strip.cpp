/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 08 2024 8:52:31 PM
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
#define max 24
void sir()
{
    ll n; cin>>n;
    if(n==1){
        cout<<1<<endl;
        
    }
    else if(n<=3){
        cout<<2<<endl;
    }
    else{
        ll ans = 2;
        ll x = 4;
        while(x<n)
        {
            x = (x+1)*2;
            ans++;
        }
        cout<<ans<<endl;
    }
    
}
void sir2()
{
    ll n; cin>>n;
    unsigned ll ans = 1Ull<<n;
    cout<<ans<<endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
