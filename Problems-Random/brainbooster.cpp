#include <bits/stdc++.h>
using namespace std;
int sir(int n) {
    int ways = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
           if (i * i == n) {
                ways += 1;
            } else {
            ways += 2;
            }
 
        }
    }

    return ways;
}

int main() {
    int n;
    cin >> n;

    // Output
    int ways = sir(n);
    cout << ways<< endl;

    return 0;
}
