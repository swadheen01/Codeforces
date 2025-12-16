
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Oct 07 2024 8:14:43 PM
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

bool pos(vector<ll>& v, ll N, ll K, ll mid) {
    ll total = 0;
    for (ll i = 0; i < N; i++) {
        total += v[i]/mid;
        if (total >= K) return true;
    }
    return total >= K;
}
void sir()
{
    // int y
    ll N, K;
    cin >> N >> K;
    vector<ll> v(N);
    ll mx = 0;
    
    for (ll i = 0; i < N; i++) {
        cin >> v[i];
        mx = max(mx,v[i]);
    }

    ll lo = 1, hi = mx, ans = 0;
    
    while (lo <= hi) {
        ll mid = lo + (hi - lo)/2;
        
        if (pos(v, N, K, mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << '\n';
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
