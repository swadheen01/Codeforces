#include<bits/stdc++.h>
using namespace std;

string mult(int x, const string &res);

string fact(int n)
{
    string res = "1";
    for (int x = 2; x <= n; x++)
        res = mult(x, res);

    reverse(res.begin(), res.end());
    return res;
}

string mult(int x, const string &res)
{
    int carry = 0;
    string result = "";
    for (char c : res) {
        int ans = (c - '0') * x + carry;
        result += (ans % 10 + '0');
        carry = ans / 10;
    }
    while (carry) {
        result += (carry % 10 + '0');
        carry = carry / 10;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fact(n) << endl;
    }
    
    return 0;
}
