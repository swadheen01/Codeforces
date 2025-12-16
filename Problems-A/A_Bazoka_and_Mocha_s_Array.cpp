#include <bits/stdc++.h>
using namespace std;
bool sort(const vector<int>& a) {
    for (size_t i = 1; i < a.size(); ++i) {
        if (a[i-1] > a[i]) {
            return false;
        }
    }
    return true;
}

bool yess(const vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        vector<int> rota(a.begin() + i, a.end());
        rota.insert(rota.end(), a.begin(), a.begin() + i);
        if (sort(rota)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (yess(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
