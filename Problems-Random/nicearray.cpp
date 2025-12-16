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
#define allah_akbar ios::sync_with_stdio(false); cin.tie(nullptr);

void sir()
{
    ll t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll sumf = 0, sum_ceil = 0;
        ll cng = 0;
        for (ll i = 0; i < n; ++i) {
            ll f;
            if(a[i]>=0) f = a[i] / k;
            else{
                if(a[i]%k==0) f = a[i]/k;
                else f = (a[i]/k)-1;
            }
            sumf+=f;

            if(a[i]%k!=0) cng++;
        }

        if (sumf <= 0 && (sumf+cng) >= 0) {
            yes;
        } else {
            no;
        }
    }
}

int main() {
    allah_akbar
    sir();
    return 0;
}
