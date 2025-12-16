#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        double value;
        string unit;
        cin >> value >> unit;

        double cV;
        string cU;

        if (unit == "kg") {
            cV = value * 2.2046;
            cU = "lb";
        } else if (unit == "lb") {
            cV = value * 0.4536;
            cU = "kg";
        } else if (unit == "l") {
            cV = value * 0.2642;
            cU = "g";
        } else if (unit == "g") {
            cV = value * 3.7854;
            cU = "l";
        }

        cout << i << " " << fixed << setprecision(4) << cV << " " << cU << endl;
    }

    return 0;
}
