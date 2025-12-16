
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), [](int x, int y) {
        return abs(x) < abs(y); // sort by absolute value
    });

    bool found = false;

    if (n == 2) {
        found = true;
    } else {
        do {
            long long nn = nums[1];
            long long dn = nums[0];
            bool ok = true;
            for (int i = 1; i < n - 1; ++i) {
        
                if (nums[i + 1] * dn != nums[i] * nn) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                found = true;
                break;
            }
        } while (next_permutation(nums.begin(), nums.end()));
    }

    cout << (found ? "Yes" : "No") << "\n";
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