#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;  // Input the lengths of S and the desired string
    string S;
    cin >> S;       // Input the original string

    string best = S;  // Start with the whole string as the best candidate
    for (int i = 1; i <= m; ++i) {
        string prefix = S.substr(0, i);  // Get the prefix of length i
        string candidate = "";  // Initialize the candidate string
        
        // Repeat the prefix to form a string of length n
        while (candidate.size() < n) {
            candidate += prefix;
        }

        // Truncate to exactly n characters if it's longer than n
        candidate = candidate.substr(0, n);
        
        // Compare the candidate string to the current best string
        if (candidate < best) {
            best = candidate;
        }
    }
    
    // Output the lexicographically smallest string of length n
    cout << best << endl;

    return 0;
}
