/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Sep 28 2024 9:22:55 PM
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
    ll n,q; cin>>n>>q;
    vector<ll>v(n);
    for(auto &e: v) cin>>e;

    map<ll,ll>mp;

    for(ll i=0; i<n; i++)
    {
        ll segN = (i+1)*(n-i)-1;
        mp[segN]++;

        if(i>0){
            ll segN2 = (n-i)*i;
            mp[segN2]+=(v[i]-v[i-1]-1); //for the gap's numbers
        }
    }
    while(q--)
    {
        ll k; cin>>k;
        if(mp.find(k)==mp.end()){
            cout<<0<<" ";
        }
        else cout<<mp[k]<<" ";
    } cout<<endl;
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
//Codeforces Round 975 (Div 2) | Video Solutions - A to C | by Harsh Gupta | TLE Eliminators