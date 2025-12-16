#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool vC(const string& s) {
    bool hasv = false;
    bool hasc = false;
    for (char c : s) {
        if (isalpha(c)) {
            if (isVowel(c)) {
                hasv = true;
            } else {
                hasc = true;
            }
        }
    }
    return (hasv && hasc);
}

int main() {
    string s;
    cin >> s;
    
    if (vC(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
