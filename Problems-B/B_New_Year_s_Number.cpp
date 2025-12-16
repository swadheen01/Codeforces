#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // If the remainder when dividing by 2020 is less than or equal to the number of 2021s, it's representable
        if (n % 2020 <= n / 2021)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
