#include <bits/stdc++.h>
using namespace std;

// Function to get the encoding of a word
string getEncoding(const string &word) {
    if (word.size() <= 2) return word;
    string middle = word.substr(1, word.size() - 2);
    sort(middle.begin(), middle.end());
    return word.front() + middle + word.back();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        // Process dictionary
        int n;
        cin >> n;
        unordered_map<string, int> encodingMap;

        for (int i = 0; i < n; ++i) {
            string word;
            cin >> word;
            string encoding = getEncoding(word);
            encodingMap[encoding]++;
        }

        // Process sentences
        int m;
        cin >> m;
        cin.ignore(); // To ignore newline after m

        cout << "Case " << t << ":\n";

        for (int i = 0; i < m; ++i) {
            string sentence;
            getline(cin, sentence);

            stringstream ss(sentence);
            string word;
            long long result = 1;

            while (ss >> word) {
                string encoding = getEncoding(word);
                result *= encodingMap[encoding];
                if (result == 0) break; // Early exit if no matches
            }

            cout << result << "\n";
        }
    }

    return 0;
}
