/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Dec 06 2024 5:07:05 PM
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

struct x {
    char lik;
    ll rat;
    ll pos;
};

bool comp(const x& a, const x& b) {
    return a.lik < b.lik;
}
bool comp2(const x& a, const x& b)
{
    return a.pos<b.pos;
}
bool comp3(const x& a, const x& b)
{
    return a.rat < b.rat;
}
void sir()
{
    // int y
    ll n; cin>>n;
    vector<ll>p(n);
    for(auto &e:p) cin>>e;
    string s; cin>>s;
    vector<x>v(n);
    for(ll i=0; i<n; i++)
    {
       //v.push_back(s[i],p[i],i); // v[i].second = p[i];
       v[i].lik = s[i], v[i].rat = p[i], v[i].pos = i;
    }
    sort(v.begin(), v.end(), comp);
    stable_sort(v.begin(), v.end(), comp3);
    
    //for(auto &p:v) cout<<p.first<<" "<<p.second<<endl;
    ll z = 1;
    for(ll i=0; i<n; i++)
    {
        if(v[i].lik=='0') v[i].rat = z++;
    }
    for(ll i=0; i<n; i++)
    {
        if(v[i].lik =='1') v[i].rat = z++;
    }
    sort(v.begin(), v.end(), comp2);

    for(auto &p:v){
        cout<<p.rat<<" ";
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
