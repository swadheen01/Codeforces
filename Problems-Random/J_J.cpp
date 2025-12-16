/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Feb 09 2025 5:34:30 PM
 */
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

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

template<ll>using ordered_set= tree<ll, null_type,less<ll>, rb_tree_tag, tree_order_statistics_node_update>;
void sir()
{

    ll n,k; cin>>n>>k;
    vector<ll>v(n+1),vv(n+1);
    ordered_set<ll>st;
    for(ll i=1; i<n+1; i++)
    {
        cin>>v[i];
        vv[i] = v[i];
    }
    srt(vv);
    map<ll,ll>mp;
    for(ll i=1; i<n+1; i++)
    {
        ll in = lower_bound(vv.begin(), vv.end(), v[i]) - vv.begin();
        mp[i] = in-1;
    }
    //for(auto &d:mp) cout<<d.second<<" ";
    ll done = -1;
    while(k--)
    {

        ll ind, val; cin>>ind>>val;

        if(ind==1){
            cout<<1<<endl;
            done = val;
        }
        else if(v[ind])
    }
    
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
