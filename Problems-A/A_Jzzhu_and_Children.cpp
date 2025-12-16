/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Sep 16 2024 10:02:07 PM
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
    int n,m; cin>>n>>m;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v[i] = x;
    }
    vector<pair<int, int>>vec;

    for(int i=0; i<n; i++)
    {
        vec.push_back({v[i], i});
    }
    sort(vec.begin(), vec.end());
    cout<<vec[n-1].first +1<<endl;

}

void sir()
{
    // int y
    int n,m; cin>>n>>m;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v[i] = x;
    }
    
    vector<int>times(n);
    for(int i=0; i<n; i++)
    {
        int x = (v[i]+m-1)/m;
        times[i] = x;
    }
    int pos;
    int mx = 0;
    for(int i=0; i<n;i++)
    {
        if(times[i]>=mx){
            mx = times[i];
            pos = i;
        }
    }
    cout<<pos+1<<endl;
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
