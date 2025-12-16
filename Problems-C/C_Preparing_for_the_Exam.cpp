/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 22 2024 9:06:46 PM
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
    ll n,m,k; cin>>n>>m>>k;
    vector<ll>vm(m), vk(k);
    for(ll i=0; i<m; i++) cin>>vm[i];
    for(ll i=0; i<k;i++) cin>>vk[i];

    if(k==n){
        while(m--)
        {
            cout<<'1';
        }cout<<endl;
        return;
    }
    if(k<(n-1)){
        while(m--){
            cout<<'0';
        }cout<<endl;
        return;
    }
    ll ind=-1;
    ll x=0;
    for(ll i=1; i<=n; i++){
        if(x==k) {ind = i; break;}
        if(vk[x]!=i) {
            ind = i;break;}
            x++;

    }

    for(ll i=0;i<m;i++){
        if(vm[i]==ind){
            cout<<'1';
        }
        else cout<<'0';
    }cout<<endl;
    return;
}
int main() {
    ALLAHU_AKBAR

    ll t;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}
