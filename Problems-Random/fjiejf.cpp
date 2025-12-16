#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N;  // Length of the sequence
        cin >> N;

        if (N == 1) {
            cout << "1\n";  // Single element sequence
        } else if (N == 2) {
            cout << "1 1\n";  // Sequence of two ones
        } else {
            vector<int> result(N, 1);  // Start with N ones
            result[N - 1] = N;  // Set the last element to N
            for (int i = 0; i < N; i++) {
                cout << result[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
