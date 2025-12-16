/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Feb 07 2025 3:13:45 AM
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
    ll n, a, b;
    cin >> n >> a >> b;

    ll l = 0, r = min(n, b), mx = 0;

    while (l <= r) {
        ll mid = (l + r) / 2;

        ll modi = mid * (b - mid + 1 + b) / 2;
        ll regu = (n - mid) * a;
        mx = max(mx, modi + regu);

        if ((b - mid + 1) > a) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << mx << endl;
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}