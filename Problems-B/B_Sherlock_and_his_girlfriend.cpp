/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jan 20 2025 3:17:50 PM
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
    vector<bool>comp(n+1);
    for(ll i=2; i<=n+1; i++)
    {
        if(!comp[i]){
            for(ll j= i+i; j<=n+1; j+=i) comp[j] = true;
        }
    }
    if(n>2) cout<<2<<endl;
    else cout<<1<<endl;
    
    for(ll i=2; i<=n+1; i++){
        if(comp[i]) cout<<2<<" ";
        else cout<<1<<" ";
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
