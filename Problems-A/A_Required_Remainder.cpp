#include <bits/stdc++.h>
using namespace std;
int findMaxK(int x, int y, int n) {
    return ((n - y) / x) * x + y;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        cout << findMaxK(x, y, n) << endl;
    }

    return 0;
}
