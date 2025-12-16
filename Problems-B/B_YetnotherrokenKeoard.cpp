#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string s;
        getline(cin, s);

        vector<char> ans;
        for (char k : s) {
            if (k == 'b') {
                for (int i = ans.size() - 1; i >= 0; --i) {
                    if (islower(ans[i])) {
                        ans.erase(ans.begin() + i);
                        break;
                    }
                }
            } else if (k == 'B') {
                for (int i = ans.size() - 1; i >= 0; --i) {
                    if (isupper(ans[i])) {
                        ans.erase(ans.begin() + i);
                        break;
                    }
                }
            } else {
                ans.push_back(k);
            }
        }

        string result(ans.begin(), ans.end());
        cout << result << endl;
    }

    return 0;
}