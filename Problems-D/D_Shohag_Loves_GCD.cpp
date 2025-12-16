#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to solve the problem for each test case
void solve() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> S(m);
        for (int i = 0; i < m; i++) {
            cin >> S[i];
        }

        if (m == 1 && n > 1) {
           
            cout << -1 << endl;
            continue;
        }

        vector<int> result(n);
        int idx = 0;
        //sort(S.begin(), S.end());
        for (int i = 0; i < n; i++) {
            result[i] = S[idx];
            idx = (idx +1) % m;
        }

        for (int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
