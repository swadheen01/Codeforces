#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        int64_t k;
        cin >> n >> k;
        vector<int64_t> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> all;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 60; j++)
            {
                if ((a[i] >> j) & 1)
                {
                    ans += 1;
                    continue;
                }
                all.push_back(j);
            }
        }
        sort(all.begin(), all.end());
        for (int x : all)
        {
            auto need = int64_t(1) << x;
            if (k >= need)
            {
                k -= need;
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
