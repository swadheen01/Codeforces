/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jan 12 2026 9:07:09 PM
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

bool check(ll n, ll k)
{
    ll one = n / 2;
    ll two = n - one;
    if (one == k)
    {
        return true;
    }
    if (two == k)
    {
        return true;
    }
    check(one, k);
    check(two, k);
    return false;
}

void sir()
{
    ll n, k;
    cin >> n >> k;

    if (n == k)
    {
        cout << 0 << endl;
        return;
    }

    set<ll> st;
    st.insert(n);
    ll ans = 0;

    while (!st.empty())
    {
        ans++;
        set<ll> nxt;
        bool found = false;
        bool pos = false;

        for (ll x : st)
        {
            if (x <= 1)
                continue;

            ll p1 = x / 2;
            ll p2 = (x + 1) / 2;

            if (p1 == k || p2 == k)
            {
                found = true;
                break;
            }

            if (p1 > k)
                nxt.insert(p1);
            if (p2 > k)
                nxt.insert(p2);
        }

        if (found)
        {
            cout << ans << endl;
            return;
        }

        if (nxt.empty())
            break;

        st = nxt;
    }

    cout << -1 << endl;
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
