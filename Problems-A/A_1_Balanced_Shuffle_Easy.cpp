/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Dec 18 2024 2:35:39 AM
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
    string s; cin>>s;
    vector<tuple<ll,ll,char>>v;
    ll b=0;
    for(ll i=0; i<s.length(); i++)
    {
        v.pb(make_tuple(b,-i,s[i]));
        if(s[i]=='(') b+=1;
        else b-=1;
    }
    srt(v);
    for(auto &t:v)
    {
        cout<<get<2>(t);
    }
    cout<<endl;

    
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
