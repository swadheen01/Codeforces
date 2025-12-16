/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Mar 16 2025 1:38:37 AM
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
    ll n; cin>>n;
    ll v[n];
    for(auto &e:v) cin>>e;

    vector<tuple<ll,ll,ll>>ans;
    for(ll i=0; i<n; i++)
    {
        ll j = min_element(v + i, v + n) - v;
        if(i!=j)
        {
            rotate(v+i,v+j,v+n);
            ans.emplace_back(i+1,n,j-i);
        }
        
    }
    cout<<ans.size()<<endl;
    for(auto &[a,b,c]:ans)
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
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
