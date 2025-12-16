/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Nov 02 2025 5:01:30 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2 * (acos(0.0))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pb push_back

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

vector<ll> ans;

bool query(ll ty, ll x, ll y)
{
    cout << ty << " " << y << " " << x << endl;
    string s;
    cin >> s;
    return s == "YES";
}
void sir()
{
    ll n;
    cin >> n;

    ans.pb(1);

    for (ll i = 2; i <= n; i++)
    {
        ll cur = i;

        ll lo = 1, hi = ans.size() + 1, ind = 0;
        while (lo < hi)
        {
            ll mid = (lo + hi) >> 1;
            ll comp = ans[mid - 1];

            if (query(1, cur, comp))
            {
                ind = mid;
                lo = mid + 1; // searching the space more right to the array
            }
            else
            {
                hi = mid;
            }
        }
        ans.insert(ans.begin() + ind, cur);
    }

    cout << 0 << " ";
    for (auto e : ans)
        cout << e << " ";
    cout << endl;
}

int main()
{
    // ALLAHU_AKBAR

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}