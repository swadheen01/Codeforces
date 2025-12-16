#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int SA = 0, SB = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            SA ^= a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
            SB ^= b[i];
        }
        int Diff = SA ^ SB;
        if (Diff == 0)
        {
            cout << "Tie\n";
            continue;
        }
        int k = 31 - __builtin_clz(Diff);
        int last = -1;
        for (int i = n - 1; i >= 0; --i)
        {
            if ((a[i] ^ b[i]) & (1 << k))
            {
                last = i;
                break;
            }
        }
        // last must exist since Diff_k == 1 implies odd number of such i
        if (last % 2 == 0)
        {
            cout << "Ajisai\n";
        }
        else
        {
            cout << "Mai\n";
        }
    }
    return 0;
}
