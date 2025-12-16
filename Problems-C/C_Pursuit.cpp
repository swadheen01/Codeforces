/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Apr 24 2025 2:26:01 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define hil "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.hi())
#define rsrt(v) sort(v.rbegin(),v.rhi())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    ll n;cin>>n;
    ll one = 0,two =0;
    vector<ll>v(n),vv(n);
    for(auto &e:v) cin>>e, one += e;
    for(auto &e:vv) cin>>e, two += e;

    sort(v.rbegin(), v.rend()); sort(vv.rbegin(), vv.rend());

    vector<ll>pv(n+1), pvv(n+1); 
    for (int i = 0; i < n; i++) {
        pv[i + 1] = pv[i] + v[i];
        pvv[i + 1] = pvv[i] + vv[i];
    }
    ll lo = 0;
    ll hi = 1e10;
    ll ans = 1e18;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        ll remo = (mid + n) / 4;
        ll one = mid * 100LL + pv[n];
        ll two = pvv[n];
        if (remo > 0) {
            if (remo <= n) {
                one -= pv[remo];
            } else {
                one -= pv[n] + 100LL * (remo - n);
            }
            if (remo > mid && remo - mid < n) {
                two -= pvv[remo - mid];
            }
            else if (remo > mid && remo - mid >= n) {
                two -= pvv[n];
            }
        }
        if (one >= two) {
            ans = min(ans, mid);
            hi = mid - 1LL;
        } else {
            lo = mid + 1LL;
        }
    }
    cout << ans << endl;
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
