/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 10 2025 11:29:19 PM
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
    // int y
    ll n,m,k; cin>>n>>m>>k;
    ll ans = 0;
    m++;
    vector<ll>v;
    while(m--)
    {
        ll x; cin>>x;
        v.pb(x);
    }
    ll a = v[m];
    for(ll e=0;e<m; e++)
    {
        ll b = v[e];
        ll c = 0;
        for(ll i=0;i<=32; i++)
        {
            if((a&(1>>i))!=(b&(1>>i))) c++;
        }
        if(c<=k) ans++;
    }
    cout<<ans<<endl;
}
void sir()
{
    ll n,m,k; cin>>n>>m>>k;
    bitset<32>bs[m+1];
    int x;
    for(int i=0;i<m+1;i++){
        cin >> x;
        bs[i] = x;
    }
 
    int cnt =0;
    for(int i=0;i<m;i++){
        bs[i]= bs[i]^bs[m];
 
        if(bs[i].count()<=k)cnt++;
    }
 
    cout << cnt << "\n";
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
