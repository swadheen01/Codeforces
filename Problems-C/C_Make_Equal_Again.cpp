#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Size of the array
        vector<int> arr(n);
        unordered_map<int, int> freq;

        // Reading the array elements and calculating their frequency
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        // Find the most frequent element in the array
        int most_frequent = max_element(freq.begin(), freq.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        })->second;

        // Calculate the minimum number of burles needed for each distinct element
        int min_burles = n - most_frequent;
        
        cout << min_burles << endl;
    }

    return 0;
}
