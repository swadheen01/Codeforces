#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        int rem = sum % 3;
        int moves = 0;

        if (rem == 1) {
            
            for (int i = 0; i < n; ++i) {
                if (a[i] % 3 == 1) {
                    ++moves;
                    break;
                }
            }
            if (moves == 0) {
                int count = 0;
                for (int i = 0; i < n; ++i) {
                    if (a[i] % 3 == 2) {
                        ++count;
                        if (count == 2) {
                            moves = 2;
                            break;
                        }
                    }
                }
            }
        } else if (rem == 2) {
            moves = 1;
        }

        cout << moves << endl;
    }

    return 0;
}
