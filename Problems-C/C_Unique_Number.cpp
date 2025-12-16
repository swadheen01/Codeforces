#include <bits/stdc++.h>
using namespace std;


int sumOfDig(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        
        for (int num = 1; num <= 1000000; num++) {
            int sum = sumOfDig(num);
            if (sum == x) {
                
                unordered_set<int> dig;
                bool dist = true;
                int temp = num;
                while (temp > 0) {
                    int digit = temp % 10;
                    if (dig.count(digit) > 0) {
                        dist = false;
                        break;
                    }
                    dig.insert(digit);
                    temp /= 10;
                }
                if (dist) {
                    cout << num << endl;
                    break;
                }
            }
            if (num == 1000000)
                cout << -1 << endl;
        }
    }

    return 0;
}
