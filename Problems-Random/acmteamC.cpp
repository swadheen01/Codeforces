#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
const int MOD = 1e9 + 7;
const int MAX_A = 1e5;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> count(MAX_A + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        count[a[i]]++;
    }

    long long result = 0;

    for (int x = 1; x <= MAX_A; ++x) {
        long long k = 0;
        // Calculate the count of numbers that are >= x and divisible by x
        for (int multiple = x; multiple <= MAX_A; multiple += x) {
            if (multiple >= x) {
                k += count[multiple];
            }
        }

        if (k > 0) {
            // Calculate the number of non-empty subsequences
            long long f_x = (pow(2, k) - 1 + MOD) % MOD;
            result = (result + f_x) % MOD;
        }
    }

    cout << result << endl;
    return 0;
}
