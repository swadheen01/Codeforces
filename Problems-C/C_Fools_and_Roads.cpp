/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Oct 29 2025
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int N = 100005;
const int LOG = 20;
vector<pair<int, int>> adj[N];
int dp[N][LOG];
int depth[N];
int n;
map<pair<int, int>, set<int>> ef;

void dfs(int node, int par)
{
    dp[node][0] = par;
    for (int i = 1; i < LOG; i++)
    {
        if (dp[node][i - 1])
            dp[node][i] = dp[dp[node][i - 1]][i - 1];
        else
            dp[node][i] = 0;
    }

    for (auto [child, idx] : adj[node])
    {
        if (child == par)
            continue;
        depth[child] = depth[node] + 1;
        dfs(child, node);
    }
}

int kthParentLCA(int node, int k)
{
    for (int p = 0; p < LOG && k > 0 && node > 0; p++)
    {
        if (k & 1)
            node = dp[node][p];
        k >>= 1;
    }
    return node;
}

int lca(int a, int b)
{
    if (depth[a] < depth[b])
        swap(a, b);

    int diff = depth[a] - depth[b];
    a = kthParentLCA(a, diff);

    if (a == b)
        return a;

    for (int i = LOG - 1; i >= 0; i--)
    {
        if (dp[a][i] != dp[b][i])
        {
            a = dp[a][i];
            b = dp[b][i];
        }
    }
    return dp[a][0];
}

void mark(int node, int targ, int id)
{
    while (node != targ)
    {
        int par = dp[node][0];
        int u = min(node, par);
        int v = max(node, par);
        ef[{u, v}].insert(id);
        node = par;
    }
}

void sir()
{
    cin >> n;

    vector<pair<int, int>> edges;

    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        depth[i] = 0;
        for (int j = 0; j < LOG; j++)
            dp[i][j] = 0;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.pb({u, v});
        adj[u].pb({v, i});
        adj[v].pb({u, i});
    }

    depth[1] = 0;
    dfs(1, 0);

    int k;
    cin >> k;

    for (int i = 1; i <= k; i++)
    {
        int a, b;
        cin >> a >> b;

        int id1 = 2 * i - 1;
        int id2 = 2 * i;

        int l = lca(a, b);

        mark(a, l, id1);
        mark(b, l, id2);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u = min(edges[i].first, edges[i].second);
        int v = max(edges[i].first, edges[i].second);

        cout << ef[{u, v}].size();
        if (i < n - 2)
            cout << " ";
    }
    cout << endl;
}

int main()
{
    ALLAHU_AKBAR
    ll t = 1;
    // cin >> t;
    while (t--)
        sir();
    return 0;
}