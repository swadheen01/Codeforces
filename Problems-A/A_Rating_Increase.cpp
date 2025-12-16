#include <bits/stdc++.h>
using namespace std;

void sir(string s) 
{
    int len = s.length();

    for (int i = 1; i < len; ++i) 
    {
        string a_str = s.substr(0, i);
        string b_str = s.substr(i);

        int a = stoi(a_str);
        int b = stoi(b_str);

        if (a > 0 && b > 0 && b > a && a_str[0] != '0' && b_str[0] != '0') {
            cout << a << " " << b << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        sir(s);
    }

    return 0;
}
