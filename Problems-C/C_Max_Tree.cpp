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

void sir()
{
    int n;
    if (!(cin >> n))
        return;
    vector<vector<int>> g(n + 1);
    vector<int> indeg(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        ll x, y;
        cin >> u >> v >> x >> y;
        // if x>y we want p_u>p_v i.e. u after v => add edge v->u
        if (x > y)
        {
            g[v].pb(u);
            indeg[u]++;
        }
        else
        {
            // else prefer y (or equal) => u before v => add edge u->v
            g[u].pb(v);
            indeg[v]++;
        }
    }
    queue<int> q;
    for (int i = 1; i <= n; i++)
        if (indeg[i] == 0)
            q.push(i);
    vector<int> order;
    order.reserve(n);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        order.pb(v);
        for (int to : g[v])
        {
            indeg[to]--;
            if (indeg[to] == 0)
                q.push(to);
        }
    }

    vector<int> p(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        p[order[i]] = i + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << p[i];
        if (i < n)
            cout << ' ';
    }
    cout << '\n';
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
