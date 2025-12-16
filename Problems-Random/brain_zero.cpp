#include <bits/stdc++.h>
using namespace std;

long long sir(long long A, long long B) {
    long long op = 0;

    while (A != 0 && B != 0) {
        if (A > B) {
            op += A / B;
            A %= B;
        } else {
            op += B / A;
            B %= A;
        }
    }

    return op;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long A, B;
        cin >> A >> B;

        long long result = sir(A, B);
        cout << result << endl;
    }

    return 0;
}
