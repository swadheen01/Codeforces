/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 9:44:07 PM
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
    ll n, k; cin>>n>>k;
    ll ans = -1;
    ll c = 0;
    vector<ll>div;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            div.pb(i);
            if(i != n/i) div.pb(n/i);
        }
    }
    srt(div);
    
    if(k<=div.size()) cout<<div[k-1]<<endl;
    else cout<<-1<<endl;
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
