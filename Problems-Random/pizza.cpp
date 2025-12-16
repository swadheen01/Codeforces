#include <bits/stdc++.h>
using namespace std;

const double PI = 3.141592653589793238462643383279;

double count(double d) {
    double arP = PI * d * d;
    double diameter = 2 * d;
    double arSq = diameter * diameter / 2;
    if (diameter < sqrt(arSq)) {
    
        return 0.0;
    }
    return arP - arSq;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        double d;
        cin >> d;
        //cout <<  << endl;
        cout << fixed << setprecision(13) << count(d) << endl;
    }
    
    return 0;
}
