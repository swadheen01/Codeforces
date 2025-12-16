#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countPivotPoints(const string& s) {
    int n = s.size();
    unordered_map<char, int> lastOccurrence;

    // Initialize the last occurrence of each character
    for (int i = 0; i < n; ++i) {
        lastOccurrence[s[i]] = i;
    }

    int pivotCount = 0;

    for (int i = 0; i < n; ++i) {
        // Check if the character is a potential pivot
        if (i == lastOccurrence[s[i]]) {
            // Count the pivot if it can form a palindrome
            int remainingLength = n - i - 1;
            if (remainingLength > 1) {
                pivotCount++;
            }
        }
    }

    return pivotCount;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int result = countPivotPoints(S);
        cout << result << endl;
    }

    return 0;
}

