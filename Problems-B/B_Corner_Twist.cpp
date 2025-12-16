/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 07 2024 9:01:08 PM
 */

#include <bits/stdc++.h>
using namespace std;

bool can(int gda[500][500], int gdb[500][500], int n, int m) {
    for (int r = n - 1; r >= 1; --r) {
        for (int c = m - 1; c >= 1; --c) {
            if (gda[r][c] != gdb[r][c]) {
                int diff = (gdb[r][c] - gda[r][c] + 3) % 3 ;

                gda[r][c] = gdb[r][c];

                gda[r-1][c] = (gda[r-1][c] + 2 * diff) % 3;

                gda[r][c-1] = (gda[r][c-1] + 2 * diff) % 3;

                gda[r-1][c-1] = (gda[r-1][c-1] + diff) % 3;
            }
        }
    }
    
    for (int r = 0; r < n; ++r) {
        if (gda[r][0] != gdb[r][0]) return false;
    }
    for (int c = 0; c < m; ++c) {
        if (gda[0][c] != gdb[0][c]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int gda[500][500];
        int gdb[500][500];

        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < m; ++c) {
                char val;
                cin >> val;
                gda[r][c] = val - '0';
            }
        }

        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < m; ++c) {
                char val;
                cin >> val;
                gdb[r][c] = val - '0';
            }
        }

        if (can(gda, gdb, n, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
