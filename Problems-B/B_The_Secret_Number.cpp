/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 21 2025 8:47:31 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd<ll>(a, b))
#define mod 1000000007
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    ll n;
    cin >> n;

    vector<ll> ans;

    ll p = 10;

    while (1)
    {

        ll div = 1 + p;

        if (div > n)
            break;

        if (n % div == 0)
        {
            ll x = n / div;
            if (x > 0)
                ans.pb(x);
        }
        p *= 10;
    }

    srt(ans);

    if (ans.empty()) cout << 0 << endl;

    else
    {
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
