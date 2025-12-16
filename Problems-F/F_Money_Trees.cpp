/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Nov 15 2024 2:52:36 AM
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
    ll n,k; cin>>n>>k;
    vector<ll>a(n),h(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>h[i];

    //for(ll i=1; i<=n; i++) a[i]+=a[i-1];

    ll cur = a[0];
    ll ans = 0;
    ll i = 0;
    ll j = 1;
    if(cur<=k) ans++;

    while(j<n)
    {
        if(h[j-1]%h[j]==0) cur += a[j];
        else{
            cur = a[j];
            i = j;
        }
        while(cur>k)
        {
            cur -= a[i]; i++;
        }
        ans = max(ans, j-i+1);
        j++;
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
