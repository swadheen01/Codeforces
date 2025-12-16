#include <iostream>
#include <string>

using namespace std;

bool sir(string s,string t) 
{
    int i = 0, j = 0;
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
        }
        if(i==s.length()){
            return true;
        }
        j++;
    }
    return false;
    //or just return i == s.length();
}

int main()
{
    string s, t;
    while (cin >> s >> t) {
        if (sir(s, t)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
