/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 03 2024 11:33:01 PM
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
    ll n,m; cin>>n;
    vector<ll>b(n); for(ll i=0; i<n; i++) cin>>b[i];
    cin>>m;
    vector<ll>g(m);
    for(ll i=0; i<m; i++) cin>>g[i];
    srt(b); srt(g);

    ll c=0;

    if(n<=m){
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(abs(b[i]-g[j])<=1){
                c++;
                g[j]=999;
                //cout<<b[i]<<' '<<g[j]<<endl;
                break;
            }
        }
    }
    }
    else{
        for(ll i=0; i<m; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(abs(g[i]-b[j])<=1){
                c++;
                b[j]=999;
                //cout<<b[i]<<' '<<g[j]<<endl;
                break;
            }
        }
    }
    }
    cout<<c<<endl;
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
