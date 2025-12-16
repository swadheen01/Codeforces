#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-7
#define ll long long
using ld = long double;

void solve() {
    int n;
    ld y;
    cin >> n >> y;

    vector<pair<ld, int>> terms(n);
    ld sum_constants = 0;
    bool has_power_term = false;

    for (int i = 0; i < n; i++) {
        ld Ai;
        int Bi;
        cin >> Ai >> Bi;

        if (Bi == 0) {
            sum_constants += Ai;
        } else {
            terms[i] = {Ai, Bi};
            has_power_term = true;
        }
    }

    // If all B_i == 0, check if sum equals y
    if (!has_power_term) {
        if (abs(sum_constants - y) <= EPS) {
            cout << "0.000000000\n";
        } else {
            cout << "-1\n";
        }
        return;
    }

    // Binary search for x
    ld lo = 0.0, hi = 1e9, mid;
    while (hi - lo > EPS) {
        mid = (lo + hi) / 2.0;
        ld sum = sum_constants;

        for (auto &[Ai, Bi] : terms) {
            sum += Ai * pow(mid, Bi);
        }

        if (sum > y) {
            hi = mid;
        } else {
            lo = mid;
        }
    }

    if (abs(sum_constants - y) > EPS && lo > 1e9 - EPS) {
        cout << "-1\n";
    } else {
        cout << fixed << setprecision(9) << lo << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
