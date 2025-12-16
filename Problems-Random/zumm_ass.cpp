#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int summ = 0;
    int orrg = n;
    int x = log10(n) +1;

    while(n > 0) {
        int last = n % 10;
        summ += pow(last,x);
        n=n/10;
    }

    if(summ == orrg) {
        cout << "Armstrong Num" << endl;
    } else {
        cout << "Not armstrong" << endl;
    }

    return 0;
}
