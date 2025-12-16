/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 23 2024 10:31:12 AM
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

const ll N = 3e5 + 9;
ll a[N];
ll n,s;

ll bs(ll x) {
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        ans += a[i] / x;
        if (ans > s) {
            return ans;
        }
    }
    return ans;
    
}
void solve()
{
    cin >> n >> s;
    ll x = -1;
    ll mx = - 2;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        mx = max(mx,a[i]);
    }

    ll lo = 1, hi = mx;
    while(lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (bs(mid) > s) {
            lo = mid + 1;
        }
        else if (bs(mid) < s){
            hi = mid - 1;
        }
        else {
            x = mid;
            hi = mid - 1;
        }
    }

    cout << x << endl;
    
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
