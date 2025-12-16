#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int n = str.length();

        for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    int zero = 0;
    while (zero < n && str[zero] == '0') {
        zero++;
    }
    str = str.substr(zero);
    cout << str << endl;
    }

    return 0;
}
