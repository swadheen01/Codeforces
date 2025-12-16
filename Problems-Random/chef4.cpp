/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 17 2024 9:01:15 PM
 */

#include <bits/stdc++.h>
using namespace std;

bool yes(string S, string T, int N, int K) {
  
    int cS[2] = {0, 0}, cT[2] = {0, 0};
    int op = 0;
    for (int i = 0; i < N; ++i) {
        cS[S[i] - '0']++;
        cT[T[i] - '0']++;
        
    }
    if (cS[0] != cT[0] || cS[1] != cT[1]) return false;

    int mis = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] != T[i]) mis++;
        op += (S[i] == '1' ? 1 : 0);
    }
    if (mis > 2 || (mis == 2 && op != K)) {
            return false;
        } else {
            return true;
        }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        string S, T;
        cin >> S >> T;
        if (yes(S, T, N, K)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
