/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Feb 02 2025 8:56:05 PM
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
    vector<ll>v(n+1);
    for(ll i=1; i<=n; i++) cin>>v[i];
    if(n==k)
    {
        ll ans = 1;
        for(ll i=2; i<=n; i+=2)
        {
            if(v[i]!=ans)
            {
                cout<<ans<<endl;
                return;
            }
            ans++;
        }
        cout<<(n/2)+1<<endl;
        return;
    }
    else
    {
        ll x = (n-k)+2;
        for(ll i=2; i<=x; i++)
        {
            if(v[i]!=1)
            {
                cout<<1<<endl;
                return;
            }
            
        }
        cout<<2<<endl;
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
