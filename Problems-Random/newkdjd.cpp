#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int mx = a[0];
        for (int i = 1; i < n; ++i) {
            if (a[i] > mx) {
                mx = a[i];
            }
        }
        
        int c = 0, d = mx, ans = 0;
        
        while (c <= d) {
            int f = (c + d) / 2;
            bool yes = true;
            
            for (int h = 0; h < n - 1; ++h) {
                if (max(a[h], a[h + 1]) <= f) {
                    yes = false;
                    break;
                }
            }
            
            if (yes) {
                ans = f;
                c = f + 1;
            } else {
                d = f - 1;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
