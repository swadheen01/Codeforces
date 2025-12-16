/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 09 2025 8:41:42 PM
 */

#include <bits/stdc++.h>
using namespace std;

const int N = 500005;
int a[N], val[N], bl[N], root;

int blockID(int x) {
    return x / root;
}

struct Query {
    int l, r, idx;
};
Query q[N];

bool comp(const Query& p, const Query& q) {
    int bp = p.l / root, bq = q.l / root;
    if (bp != bq) return p.l < q.l;
    return (bp & 1) ? (p.r < q.r) : (p.r > q.r);
}

int main() {
    int n, m;
    scanf("%d", &n);
    root = sqrt(n) + 1;

    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int l, r;
        scanf("%d%d", &l, &r);
        q[i] = {l - 1, r - 1, i};
    }

    sort(q, q + m, comp);

    vector<int> ans(m);
    int cl = 0, cr = -1;

    for (int i = 0; i < m; ++i) {
        int l = q[i].l;
        int r = q[i].r;

        auto add = [&](int x) {
            val[a[x]]++;
            if (val[a[x]] == 1) bl[blockID(a[x])]++;
            else if (val[a[x]] == 2) bl[blockID(a[x])]--;
        };

        auto remove = [&](int x) {
            val[a[x]]--;
            if (val[a[x]] == 1) bl[blockID(a[x])]++;
            else if (val[a[x]] == 0) bl[blockID(a[x])]--;
        };

        while (cr < r) add(++cr);
        while (cr > r) remove(cr--);
        while (cl < l) remove(cl++);
        while (cl > l) add(--cl);

        auto getAnswer = [&]() {
            for (int b = 0; b < root; ++b) {
                if (bl[b] > 0) {
                    int start = b * root;
                    int end = min(N - 1, (b + 1) * root - 1);
                    for (int j = start; j <= end; ++j) {
                        if (val[j] == 1) return j;
                    }
                }
            }
            return 0;
        };

        ans[q[i].idx] = getAnswer();
    }

    for (int i = 0; i < m; ++i)
        printf("%d\n", ans[i]);

    return 0;
}
