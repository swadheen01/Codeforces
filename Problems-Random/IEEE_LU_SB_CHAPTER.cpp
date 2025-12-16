/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Aug 31 2025 3:23:15 AM
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
char a[12] = {'I', 'E', 'L', 'U', 'S', 'B', 'C', 'H', 'A', 'P', 'T', 'R'};
map<char, ll> chk;

void sir()
{
    string s;
    cin >> s;

    map<char, ll> mp;
    for (auto c : s)
        mp[c]++;

    for (ll i = 0; i < 12; i++)
    {
        char c = a[i];
        if (c == 'E' && mp[c] < 4 || (!mp[c]))
        {
            cout << -1 << endl;
            return;
        }
    }

    // --- Sliding Window Approach ---
    vector<ll> need(26, 0), have(26, 0);
    for (auto [c, v] : chk)
        need[c - 'A'] = v;

    ll unq = 0;
    for (ll k = 0; k < 26; k++)
        if (need[k] > 0)
            unq++;

    ll h = 0, ans = LLONG_MAX;
    ll l = 0;
    for (ll r = 0; r < (ll)s.size(); r++)
    {
        ll idx = s[r] - 'A';
        have[idx]++;
        if (need[idx] > 0 && have[idx] == need[idx])
            h++;

        while (h == unq && l <= r)
        {
            ans = min(ans, r - l + 1);
            ll idl = s[l] - 'A';
            have[idl]--;
            if (need[idl] > 0 && have[idl] < need[idl])
                h--;
            l++;
        }
    }

    if (ans == LLONG_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
}

int main()
{
    ALLAHU_AKBAR
    for (ll i = 0; i < 12; i++)
    {
        if (a[i] == 'E')
            chk[a[i]] = 4;
        else
            chk[a[i]] = 1;
    }

    ll t = 1;
    cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
