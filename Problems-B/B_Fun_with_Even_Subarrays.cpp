/*
 *Cansyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Feb 13 2025 11:11:01 PM
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int NN = 2e5 + 9;
int N, ans, A[NN];

void sir() {
    cin >> N;
    for (int i = N; i >= 1; i--) {
        cin >> A[i];
    }

    ans = 0;
    for (int i = 2; i <= N; i++) {
        if (A[i] != A[1]) {
            ans++;
            i += i - 2;
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int T = 1; cin >> T;
    for (int i = 1; i <= T; i++) {
        sir();
    }
    return 0;
} 