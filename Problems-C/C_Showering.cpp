/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Aug 19 2024 11:38:03 PM
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
    ll n,s,m; cin>>n>>s>>m;
    
    vector<ll>vec1,vec2;
    for(ll i=0; i<n; i++)
    {
        ll l,r; cin>>l>>r;
        vec1.push_back(l);
        vec2.push_back(r);
    }
    ll dif = vec1[0];
    for(ll i=0; i<n-1; i++)
    {
        if((vec1[i+1] - vec2[i]>dif))
        {
            dif = vec1[i+1] - vec2[i];
        }
    }
    if(m-vec2[n-1]>dif)
    {
        dif = m-vec2[n-1];
    }
    if(dif<s) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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
