#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string rev(string s) {
    reverse(s.begin(), s.end());
    return s;
}

void sir() {
    string a, b;
    cin >> a >> b;
    long long c = stoll(rev(a));  
    long long d = stoll(rev(b)); 
    long long summ = c + d;
    string su = to_string(summ);
    string ans = rev(su);
    long long result = stoll(ans);
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        sir();
    }
    return 0;
}