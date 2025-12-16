/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Aug 14 2025 11:40:01 PM
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

vector<int> parent_, rnk, mn;

int findp(int x)
{
    if (parent_[x] == x)
        return x;
    return parent_[x] = findp(parent_[x]);
}

void unite(int a, int b)
{
    a = findp(a);
    b = findp(b);
    if (a == b)
        return;

    if (rnk[a] < rnk[b])
        swap(a, b);

    parent_[b] = a;
    mn[a] = min(mn[a], mn[b]);

    if (rnk[a] == rnk[b])
        rnk[a]++;
}

void sir()
{
    int n, m;
    cin >> n >> m;

    parent_.resize(n + 1);
    rnk.assign(n + 1, 0);
    mn.resize(n + 1);

    for (int i = 1; i <= n; i++)
    {
        parent_[i] = i;
        mn[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        unite(x, y);
    }

    for (int i = 0; i < m; i++)
    {
        ll c;
        cin >> c;

        if (c <= n)
        {
            int p = findp((int)c);
            cout << mn[p];
        }
        else
        {
            cout << c; // nonexistent student -> presents himself
        }

        if (i + 1 < m)
            cout << " ";
    }
    cout << endl;
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
