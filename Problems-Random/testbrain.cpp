#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N + 1); // 1-based indexing

    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    vector<int> dp(N + 1);

    // Calculate dp values from right to left
    for (int i = N; i >= 1; --i) {
        if (A[i] == 0) {
            dp[i] = 1;
        } else {
            dp[i] = dp[i + A[i]] + 1;
        }
    }

    // Output results for the current test case
    for (int i = 1; i <= N; ++i) {
        cout << dp[i] << " ";
    }
    cout << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
