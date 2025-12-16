/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Nov 19 2025 1:43:45 AM
 */
#include <bits/stdc++.h>
#include <algorithm>

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

multiset<ll> ms_l, ms_r;
multiset<pair<ll, ll>> S;

void sir()
{
    ll q;
    cin >> q;

    while (q--)
    {
        char c;
        ll l, r;
        cin >> c >> l >> r;

        if (c == '+')
        {
            S.insert({l, r});
            ms_l.insert(l);
            ms_r.insert(r);
        }
        else
        {

            auto it = S.find({l, r});
            S.erase(it);
            ms_l.erase(ms_l.find(l));
            ms_r.erase(ms_r.find(r));
        }

        if (S.size() < 2)
        {
            no;
            continue;
        }

        ll min_r = *ms_r.begin();
        ll max_l = *ms_l.rbegin();

        if (min_r < max_l)
            yes;
        else
            no;
    }
}

int main()
{
    ALLAHU_AKBAR

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        sir();
    }
    return 0;
}
