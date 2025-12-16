/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Apr 13 2025 9:54:32 PM
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
    vector<ll>v(n+n+1);
    ll g[n+1][n+1];
    set<ll>st;
    for(ll i=1;i<=n; i++)
    {
        for(ll j=1;j<=n; j++) 
        {
            cin>>g[i][j];
            v[i+j]=g[i][j];
            st.insert(v[i+j]);
           
        }
    }
    ll mx = 2*n;
    for(ll i=1; i<=mx; i++)
    {
        if(st.find(i)==st.end())
        {
            v[1] = i;
            break;
        }
    }
    

    for(ll i=1; i<=2*n; i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
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
