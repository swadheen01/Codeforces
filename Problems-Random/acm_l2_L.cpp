#include <iostream>
#include <string>

using namespace std;

string sir(int par, int s) {
    int diff = s - par;
    if (s == 1) {
        return "Hole-in-one";
    } else if (diff == -3) {
        return "Double Eagle";
    } else if (diff == -2) {
        return "Eagle";
    } else if (diff == -1) {
        return "Birdie";
    } else if (diff == 0) {
        return "Par";
    } else if (diff == 1) {
        return "Bogey";
    } else {
        return "Double Bogey";
    }
}

int main() {
    int hole = 1;
    int par, s;

    while (true) {
        cin >> par >> s;
        if (par == 0 && s == 0) {
            break; // Exit the loop if input is 0 0
        }

        cout << "Hole #" << hole << endl;
        cout << sir(par, s) << "." << endl << endl;

        hole++;
    }

    return 0;
}
