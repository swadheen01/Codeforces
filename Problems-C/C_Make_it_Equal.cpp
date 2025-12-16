/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 10 2025 9:07:38 PM
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
    multiset<ll>st;
    ll n,k; cin>>n>>k;
    vector<ll>a(n); for(auto &e:a) {cin>>e;}
    vector<ll>b(n); for(auto &e:b){ cin>>e; st.insert(e);}

    if(k==1)
    {
        yes;
        return;
    }
    map<ll,ll>mp, mp2;
    for (ll x : a) 
    {
        ll r1 = x % k;
        ll r2 = (k-x%k)% k;
        ll eq = min(r1, r2);
        mp[eq]++;
    }
    for (ll x : b) 
    {
        ll r1 = x % k;
        ll r2 = (k-x%k) % k;
        ll eq = min(r1, r2);
        mp2[eq]++;
    }
    bool ok = true;
        
    for(auto& p:mp)
    {
        if (mp2[p.first] != p.second) {
            ok = false;
            break;
        }
    }
    for(auto &p : mp2) 
    {
        if(mp[p.first] != p.second) {
            ok = false;
            break;
        }
    }
    if(!ok)
    {
        no;
        return;
    }
    yes;
    return;
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
