#include <bits/stdc++.h>
using namespace std;

void solve(int N, vector<int>& P) {
    int len = 1 << N;
    if (len == 1) {
        cout << P[0] << "\n";
        return;
    }
    int mid = len / 2;
    vector<int> left(P.begin(), P.begin() + mid);
    vector<int> right(P.begin() + mid, P.end());

    solve(N - 1, left);
    solve(N - 1, right);

    if (right < left) {
        swap(left, right);
    }

    for (int x : left) cout << x << " ";
    for (int x : right) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int len = 1 << N;
        vector<int> P(len);
        for (int i = 0; i < len; i++) cin >> P[i];
        solve(N, P);
    }
}
