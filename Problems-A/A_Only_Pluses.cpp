/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 11 2024 8:50:30 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int fiv = 5;
        
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);

        while (fiv > 0) {
            if (arr[0] <= arr[1] && arr[0] <= arr[2]) {
                arr[0]++;
            } else if (arr[1] <= arr[0] && arr[1] <= arr[2]) {
                arr[1]++;
            } else {
                arr[2]++;
            }
            fiv--;
            sort(arr, arr + 3); 
        }

        int ans = arr[0] * arr[1] * arr[2];
        cout << ans << endl;
    }
    return 0;
}
