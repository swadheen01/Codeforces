#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string t = "leadinguniversity";

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    if (s == t) {
        cout << "Leading University" << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
