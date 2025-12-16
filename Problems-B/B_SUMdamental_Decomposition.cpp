/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu May 01 2025 9:00:26 PM
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
#define inf 1e18

ll one(ll x) {
    ll cnt = 0;
    while (x > 0) {
        cnt += (x & 1);
        x >>= 1;
    }
    return cnt;
}

ll mn(ll r) {
    if (r == 0) return 2;
    ll p = one(r);
    if (p >= 2) return r;
    for (ll k = 0; k < 31; k++) {
        if (!((r >> k) & 1)) {
            ll s = 1ll << k;
            return r + 2 * s;
        }
    }
    return r + 2;
}


void sir()
{
    ll n, x;
    cin >> n >> x;
    if (n == 1 && x>0) {
        cout<<x<<endl;
        return;
    }
    else if(n==1 && x==0)
    {
        cout<<-1<<endl;
        return;
    }
    ll ans = inf;;
    ll mxk = min(n, 30ll);

    for (ll k = 1; k <= mxk; k++) {
        ll xr1 = (n - k) % 2; 
        ll r = x ^ xr1; //banabo

        ll sumt = inf;
        if (k == 1 && r>0) sumt = r;
        else if (k == 2) sumt = mn(r);
        else{
            if(r==0 && k==3) {
                sumt=6;
            } else if(one(r) >= k) {
                sumt = r;
            }
        }
        if (sumt < inf) {
            ans = min(ans, (n - k) + sumt);
        }
    }
    if (ans == inf) {
        cout << -1 << endl;
        return;
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
