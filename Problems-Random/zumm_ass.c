#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n2 = n; // Store the original number

    int summ = 0;

    while (n > 0) {
        int last = n % 10;
        summ += pow(last, 3);
        n = n / 10;
    }

    if (summ == n2) {
        cout << "Armstrong Num" << endl;
    } else {
        cout << "Not armstrong" << endl;
    }

    return 0;
}
