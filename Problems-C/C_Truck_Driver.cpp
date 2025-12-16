/*
 *Copy r (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Nov 01 2025 6:26:14 PM
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
#define print(vec)        \
    for (auto e : vec)    \
        cout << e << " "; \
    cout << endl
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    vector<ll> ca(n + 1, 0);
    vector<ll> cb(n + 1, 0);

    for (ll i = 1; i <= n; i++)
    {
        ca[i] = ca[i - 1] + (s[i - 1] == 'a' ? 1 : 0);
        cb[i] = cb[i - 1] + (s[i - 1] == 'b' ? 1 : 0);
    }

    ll ans = 0;

    for (ll i = 1; i <= n; i++)
    {

        ll minJ = -1, maxJ = -1;

        ll l = i, r = n;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll cntA = ca[mid] - ca[i - 1];
            if (cntA >= a)
            {
                minJ = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (minJ == -1)
            continue;

        l = i, r = n;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll cntB = cb[mid] - cb[i - 1];
            if (cntB < b)
            {
                maxJ = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (maxJ == -1)
            continue;

        if (minJ <= maxJ)
        {
            ans += (maxJ - minJ + 1);
        }
    }

    cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
