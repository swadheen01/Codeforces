/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 17 2024 9:13:12 PM
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll summ(int start, int end) {
    ll sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += pow(2, i);
    }
    return sum;
}

void solve(int N, int X) {
    ll win = summ(N - X + 1, N);
    ll loss = summ(1, N - X);
    cout << win - loss << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        solve(N, X);
    }
    return 0;
}
