#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n, q, a[N], f[N], res[N], blk, cnt = 0;

struct Q {
    int l, r, i;
    bool operator<(const Q& o) const {
        int b1 = l / blk, b2 = o.l / blk;
        if (b1 != b2) return b1 < b2;
        return (b1 & 1) ? r > o.r : r < o.r;
    }
};

vector<Q> qs;

void add(int x) {
    if (++f[x] == 1) cnt++;
}

void rem(int x) {
    if (--f[x] == 0) cnt--;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> q;
    vector<int> v(n);
    for (int &x : v) cin >> x;

    vector<int> tmp = v;
    sort(tmp.begin(), tmp.end());
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    for (int i = 0; i < n; ++i)
        a[i] = lower_bound(tmp.begin(), tmp.end(), v[i]) - tmp.begin();

    blk = sqrt(n);
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        qs.push_back({--l, --r, i});
    }

    sort(qs.begin(), qs.end());

    int l = 0, r = -1;
    for (auto &x : qs) {
        while (l > x.l) add(a[--l]);
        while (r < x.r) add(a[++r]);
        while (l < x.l) rem(a[l++]);
        while (r > x.r) rem(a[r--]);
        res[x.i] = cnt;
    }

    for (int i = 0; i < q; ++i)
        cout << res[i] << '\n';
}
