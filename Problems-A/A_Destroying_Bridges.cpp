#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int total = (n*(n-1)/2);
        int rem = total - k;
        int one = ((n-1)*(n-1-1)/2);
        if(k>=(n-1))          //here is the change(if(rem<=one && k != 0)
        {
            cout<<1<<endl;
        }
        
        else {
            cout << n << endl;
        }
       
    }

    return 0;
}
