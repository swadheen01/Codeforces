/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 31 2025 10:01:00 PM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

const int N = 6005;
int par[N], rnk[N];

void dsu_init(int n) {
    for (int i = 0; i <= n; i++) {
        par[i] = i;
        rnk[i] = 0;
    }
}

int dsu_find(int x) {
    if (par[x] != x) par[x] = dsu_find(par[x]);
    return par[x];
}

bool dsu_same(int x, int y) {
    return dsu_find(x) == dsu_find(y);
}

void dsu_unite(int x, int y) {
    int px = dsu_find(x), py = dsu_find(y);
    if (px == py) return;
    if (rnk[px] < rnk[py]) swap(px, py);
    par[py] = px;
    if (rnk[px] == rnk[py]) rnk[px]++;
}

void sir() {
    ll n;
    cin >> n;
    vector<tuple<int, int, int>> seg;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        seg.pb({b - a, a, i + 1});
    }

    sort(seg.rbegin(), seg.rend());

    set<int> points;
    for (int i = 1; i <= 2 * n; i++) points.insert(i);

    dsu_init(2 * n + 3);
    vector<int> res;

    for (auto [len, a, idx] : seg) {
        int b = a + len;
        int f_gain = 0;

        auto it_start = points.lower_bound(a);
        auto it_end = points.lower_bound(b);

        for (auto it = it_start; it != it_end; ++it) f_gain++;

        int g_cost = dsu_same(a, b) ? 2 : 0;

        if (f_gain - g_cost > 0) {
            res.pb(idx);
            for (auto it = it_start; it != it_end;) it = points.erase(it);
            if (!dsu_same(a, b)) dsu_unite(a, b);
        }
    }

    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
        if (i) cout << " ";
        cout << res[i];
    }
    cout << endl;
}

int main() {
    ALLAHU_AKBAR
    ll t = 1;
    cin >> t;
    while (t--) {
        sir();
    }
    return 0;
}
