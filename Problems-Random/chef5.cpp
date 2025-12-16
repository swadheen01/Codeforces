#include <bits/stdc++.h>
using namespace std;

int countGoodSubsequences(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int count = 0;
    // Use dynamic programming or a sliding window approach
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] - arr[i] == j - i) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << countGoodSubsequences(A) << endl;
    }

    return 0;
}
