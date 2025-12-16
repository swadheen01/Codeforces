/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Mar 19 2025 1:46:50 AM
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
    ll n,m;cin>>n>>m;
    // vector<vector<ll>>v(n,vector<ll>(m));
    // for(ll i=0; i<n;i++)
    // {
    //     for(ll j=0; j<m; j++) cin>>v[i][j];
    // }
    vector<ll>ans;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            ans.pb(max(i,n-i-1)+max(j,m-j-1));
        }
    }
    srt(ans);
    for(auto &e:ans) cout<<e<<" ";
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
