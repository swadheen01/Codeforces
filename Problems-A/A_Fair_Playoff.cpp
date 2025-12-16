#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        
        if (min(a, b) > max(x, y) || min(x, y) > max(a, b)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
