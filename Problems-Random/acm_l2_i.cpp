#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        for (int i = 0; i < n; ++i) {
            string s;
            getline(cin, s);
            
            string word;
            int start = 0;

            for (int j = 0; j <= s.length(); ++j) {
                if (j == s.length() || s[j] == ' ') {
                    reverse(s.begin() + start, s.begin() + j);
                    cout << s.substr(start, j - start);
                    if (j != s.length()) {
                        cout << " ";
                    }
                    start = j + 1;
                }
            }
            cout << endl;
        }

        if (t > 0) {
            cout << endl;
        }
    }

    return 0;
}
