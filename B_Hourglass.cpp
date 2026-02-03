#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long s, k, m;
    cin >> s >> k >> m;

    long long current_top = s;
    long long num_flips = m / k;

    if (num_flips == 0) {
        cout << max(0LL, s - m) << "\n";
        return;
    }

    // After 1st flip at t=k
    current_top = min(s, k);

    // If there is a 2nd flip at t=2k
    if (num_flips >= 2) {
        // top_2k = s - (top_k - min(top_k, k))
        // Since top_k = min(s, k), and min(s, k) <= k,
        // then min(top_k, k) is just top_k.
        // So top_k - min(top_k, k) = 0.
        // Therefore, top_2k = s - 0 = s.
        
        // This means it toggles! 
        // If num_flips is odd: top = min(s, k)
        // If num_flips is even: top = s
        if (num_flips % 2 == 0) {
            current_top = s;
        } else {
            current_top = min(s, k);
        }
    }

    long long time_since_last_flip = m % k;
    cout << max(0LL, current_top - time_since_last_flip) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}