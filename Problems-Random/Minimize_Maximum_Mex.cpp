/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Aug 06 2025 9:11:24 PM
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
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(auto &e:a) cin>>e;
    for(auto &e:b) cin>>e;
    
    vector<ll> c(n+2,0);
    vector<bool> p(n+2,false);
    
    for(ll i=0;i<n;i++){
        if(a[i]<=n) c[a[i]]++;
        if(b[i]<=n) c[b[i]]++;
        if(a[i]==b[i] && a[i]<=n) p[a[i]]=true;
    }
    
    //for(auto &e:c) cout<<e<<" "; cout<<endl;
    ll m = 0;
    while(m<=n && c[m]>0) m++;
    
    //cout<<m<<endl;
    
    ll u=0;
    for(ll i=0;i<m;i++){
        if(!p[i]){
            u++;
            if(u==2){
                cout<<i<<endl;
                break;
            }
        }
    }
    if(u<2) cout<<m<<endl;
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
