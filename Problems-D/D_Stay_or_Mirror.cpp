/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 31 2025 10:02:11 PM
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
    ll n;
    cin >> n;
    vector<ll> p(n);
    for(auto &e:p) cin>>e;
    
    ll ans = 1e18;
    ll tot = 1<<n;
    for (ll m = 0; m<tot; m++) {
        vector<ll> a(n);
        for (ll i = 0; i <n; i++) {
            if (m&(1<<i)) 
            {
                a[i] = 2 * n - p[i];
            }
            else a[i] = p[i];
                
        }
        
        ll cng = 0;
        for (ll i = 0;i<n; i++) {
            for(ll j=i+1; j<n; j++) {
                if(a[i]>a[j]) cng++;
            }
        }
        ans =min(ans, cng);
    }
    
    cout << ans << " \n";
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
