#include <bits/stdc++.h>
using namespace std;

int max_sum(int n, vector<int>& a) {
    int max_sum = 0, neg_c = 0, min_abs = 101;
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            neg_c++;
            a[i] = -a[i];
        }
        max_sum += a[i];
        min_abs = min(min_abs, a[i]);
    }
    if (neg_c % 2 == 1)
        max_sum -= 2 * min_abs;
    return max_sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int sum1 = max_sum(n, a);
        sort(a.begin(), a.end());
        int sum2 = max_sum(n, a);
        cout << max(sum1, sum2) << endl;
    }
    return 0;
}
