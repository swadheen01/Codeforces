#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> l(s.begin(), s.end());
        set<char> se(s.begin(), s.end());

        int pair = 0;
        for (auto i : se) {
            int count = 0;
            for (auto j : l) {
                if (i == j) {
                    count++;
                }
            }
            pair += (count * (count - 1));
        }

        cout << pair << endl;
    }

    return 0;
}
