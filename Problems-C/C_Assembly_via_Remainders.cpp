#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> x[i];
        }

        vector<long long> a(n);
        // if(x[0]==1){
        //     a[0]=2;
        //     }
        // else if(x[0]==2)
        // {
        //     a[0]= 3;
        // }
        a[0] = x[0]+1;
        for (int i = 1; i < n; ++i) {
            a[i] = (x[i - 1] + a[i - 1]) %1000000000;
            // if(a[i]% x[i-1]==0){
            //     a[i]=x[i-1]+1;
            // }
            if(a[i]%a[i-1]!=x[i-1])
            {
                while(a[i-1]<=x[i-1]){
                    a[i-1]+= a[i-2];
                }
                a[i] = x[i-1];
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}