#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}
long long gcm(long long a, long long b, long long c, long long X) {


    long long labc = lcm(lcm(a, b), c);

    if (labc >= X) {
        return -1;
    }
    long long mult = (X - 1) / labc;
    return labc * mult;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, X;
        cin >> a >> b >> c >> X;

        long long result = gcm(a, b, c, X);

        cout << result << endl;
    }

    return 0;
}
