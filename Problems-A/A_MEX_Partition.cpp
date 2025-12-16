/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 12 2025 8:45:55 PM
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
#define ALLAHU_AKBAR         \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);

void sir()
{
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int ans = n + 1;

    for (int k = 1; k <= n; k++)
    {

        bool can = 1;
        for (auto &p : mp)
        {
            if (p.second % k != 0)
            {
                can = 0;
                break;
            }
        }

        if (!can)
            continue;

        int mx = 0;
        while (1)
        {
            if (mp.find(mx) == mp.end() || mp[mx] < k)
            {
                break;
            }
            mx++;
        }

        ans = min(ans, mx);
    }

    cout << ans << endl;
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
