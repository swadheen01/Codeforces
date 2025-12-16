#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> l(n);
        for (int i = 0; i < n; ++i) {
            cin >> l[i];
        }

        bool f = true;
        for (int i = 0; i < n - 1; ++i) {
            if (abs(l[i] - l[i + 1]) % 2 != 0) {
                f = false;
                break;
            }
        }

        if (f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
