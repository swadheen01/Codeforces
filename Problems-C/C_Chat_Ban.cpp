/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed May 14 2025 10:59:03 PM
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

ll get(ll x)
{
    return x*1ll*(x+1)/2;
}

void sir()
{
    ll n,k; cin>>n>>k;
    ll l = 1, r = 2*n-1, mid;
    ll ans = 2*n-1;
    bool ok = false;
    while(l<=r)
    {
        mid = (l+r)/2;
        
        if (mid >= n) {
            ok = (get(n) + get(n - 1) - get(2 * n - 1 - mid) >= k);
        } else {
            ok = (get(mid) >= k);
        }
        if (ok) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout<<ans<<endl;
}
void sir2()
{
    ll n, x, y;
    cin >> n >> x >> y;
    
    ll l = lcm(x,y);
    
    ll pos = n / x - n / l;
    ll neg = n / y - n / l;
    
    ll ans =  (n + n - pos + 1) * pos / 2 - (neg + 1) * neg / 2;
    cout << ans << "\n";

}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin>>t;
    while(t--)
    {
        sir2();
    }
    return 0;
}
