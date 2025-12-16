/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 17 2025 9:30:10 PM
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
const ll m = 1e6+5;
vector<ll>v(m,0);
void sir()
{
    for(ll i=1; i<=m; i++)
    {
        for(ll j=i; j<=m; j+=i)
        {
            v[j]++;
        }
    }
    //for(ll i=1; i<=10; i++) cout<<v[i]<<endl;
    ll n; cin>>n;
    while(n--)
    {
        ll num; cin>>num;
        cout<<v[num]<<endl;
    }

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
