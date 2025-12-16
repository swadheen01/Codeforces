#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        string p1, p2;
        cin >> p1;
        if (p1 == "E") {
            break;
        }
        cin >> p2;

        int w1 = 0, w2 = 0;
        for (int i = 0; i < p1.length(); ++i) {
            if (p1[i] == p2[i]) {
                continue;
            }
            if ((p1[i] == 'R' && p2[i] == 'S') ||
                (p1[i] == 'S' && p2[i] == 'P') ||
                (p1[i] == 'P' && p2[i] == 'R')) {
                w1++;
            } else {
                w2++;
            }
        }

        cout << "P1: " << w1 << endl;
        cout << "P2: " << w2 << endl;
    }

    return 0;
}
