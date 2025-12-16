//have to solve by this process
#include<bits/stdc++.h>
using namespace std;

int findDN(int arr[], int n) {
    int DN = 0; 
    for (int i = 0; i < n; ++i) {
        DN ^= arr[i]; // XOR all elements to find the diff number
    }

    for (int i = 0; i < n; i++) {
        if (DN == arr[i])
            return i + 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int position = findDN(arr, n);
        cout << position << endl;
    }
    return 0;
}
