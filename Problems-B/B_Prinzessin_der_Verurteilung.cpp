#include <bits/stdc++.h>
using namespace std;

vector<string> generateStrings() {
    vector<string> ls;
    for (int a = 0; a < 26; a++)
        ls.push_back(string(1, 'a' + a));
    for (int a = 0; a < 26; a++)
        for (int b = 0; b < 26; b++)
            ls.push_back(string(1, 'a' + a) + (char)('a' + b));
    for (int a = 0; a < 26; a++)
        for (int b = 0; b < 26; b++)
            for (int c = 0; c < 26; c++)
                ls.push_back(string(1, 'a' + a) + (char)('a' + b) + (char)('a' + c));
    sort(ls.begin(), ls.end(), [](const string &x, const string &y) {
        if (x.length() != y.length())
            return x.length() < y.length();
        return x < y;
    });
    return ls;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> ls = generateStrings();
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        string input;
        cin >> input;
        
        unordered_set<string> substrings;
        for (int len = 1; len <= 3; len++) {
            for (int i = 0; i <= N - len; i++) {
                substrings.insert(input.substr(i, len));
            }
        }
        
        for (const string &s : ls) {
            if (substrings.find(s) == substrings.end()) {
                cout << s << "\n";
                break;
            }
        }
    }
    
    return 0;
}
