#include <iostream>

using namespace std;

int main() {
    int X, a, b, c, N;
    cin >> X >> a >> b >> c >> N;

    int op = 0;
    bool possible = false;

    for (int i = 0; i <= N / a; ++i) {
        for (int j = 0; j <= N / b; ++j) {
            int r = N - (i * a + j * b);
            if (r >= 0 && r % c == 0 && r / c <= X) {
                possible = true;
                op = i + j + r / c;
                break;
            }
        }
        if (possible) {
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
        cout << op-1 << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
