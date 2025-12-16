/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Feb 12 2025 11:36:22 PM
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


bool customSort(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first)
        return a.first > b.first; 
    return a.second < b.second;  
}
void sir2()
{
    ll n,k; cin>>n>>k;
    map<ll,ll>mp;
    vector<pair<ll,ll>>v;
    set<ll>st;
    vector<ll>vec(n);
    for(ll i=0; i<n;i++)
    {
        cin>>vec[i];
        mp[vec[i]]++;
        st.insert(vec[i]);
    }
    for(auto &p:mp)
    {
        v.push_back({p.second,p.first});
    }
    srt(vec);
    for(auto &e:vec) cout<<e<<" "; cout<<endl;
    sort(v.begin(), v.end(), customSort);

    ll ans =v[0].first;
    ll cur = v[0].second;
    k--;
    
    while(k--)
    {
        if(st.find(cur+1)!=st.end())
        {
            ans += mp[cur+1];
            cur++;
        }
        else break;
    }
    
    cout<<ans<<endl;
}
void sir()
{
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &e:v) cin>>e;
    sort(v.begin(), v.end());

    ll ans = 0;
    ll j = 0;
    for(ll i=0; i<n; i++)
    {
        j = max(i,j);
        while(j+1<n && v[j+1]-v[j]<=1 && v[j+1]-v[i]<k) j++;

        ans = max(ans, j-i+1);
    }
    cout<<ans<<endl;
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
