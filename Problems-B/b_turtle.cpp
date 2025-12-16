#include <iostream>
using namespace std;

// Define a constant for the maximum value when m >= 30
const long long MAX_VALUE = 2147483647;  // (2^31 - 1)

int main() {
    // Read the number of test cases
    int t;
    cin >> t;
    
    // Process each test case
    while (t--) {
        // Read n and m for the current test case
        long long n, m;
        cin >> n >> m;
        
        if (m >= 30) {
            cout << MAX_VALUE << endl;  // Output 2147483647
        } else {
            long long result = 0;
            
            long long start = n - m;
            if (start < 0) {
                start = 0; 
            }
            
            long long end = n + m;
            
            for (long long i = start; i <= end; ++i) {
                result |= i;
            }
            
            // Output the computed result
            cout << result << endl;
        }
    }
    
    return 0;  // End of the program
}