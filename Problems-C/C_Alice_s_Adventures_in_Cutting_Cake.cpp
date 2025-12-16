#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool can_divide(const vector<int>& arr, int m, int v, int alice_piece) {
    int n = arr.size();
    
    for (int i = 0; i <= n; i++) {
        int alice_sum = accumulate(arr.begin(), arr.begin() + i, 0);
        
        if (alice_sum == alice_piece) {
            int curr_sum = 0, pieces = 0;
            
            for (int j = i; j < n; j++) {
                curr_sum += arr[j];
                if (curr_sum >= v) {
                    pieces++;
                    curr_sum = 0;
                }
            }
            
            if (pieces >= m) return true;
        }
        
        alice_sum = accumulate(arr.end() - i, arr.end(), 0);
        
        if (alice_sum == alice_piece) {
            int curr_sum = 0, pieces = 0;
            
            for (int j = 0; j < n - i; j++) {
                curr_sum += arr[j];
                if (curr_sum >= v) {
                    pieces++;
                    curr_sum = 0;
                }
            }
            
            if (pieces >= m) return true;
        }
    }
    
    return false;
}

int solve() {
    int n, m, v;
    cin >> n >> m >> v;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (accumulate(arr.begin(), arr.end(), 0) < m * v) {
        return -1;
    }
    
    int left = 0, right = accumulate(arr.begin(), arr.end(), 0), ans = -1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (can_divide(arr, m, v, mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cout << solve() << endl;
    }
    
    return 0;
}