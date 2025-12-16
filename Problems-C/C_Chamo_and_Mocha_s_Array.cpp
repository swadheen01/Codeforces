#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; ++i) {
            cin >> a[i];
        }

        //sort(a.begin(), a.end());

        long long mx = -1;
        for(long long i=0; i<n-1; i++)
        {
            if(a[i] <= a[i+1])
            { if( a[i]>=mx) mx = a[i];
            }
            else{
                if(a[i+1]>mx) mx = a[i+1];
            }
        }
        for(long long i=0; i<n-2; i++)
        {
            mx = max(mx,((a[i]+a[i+1]+a[i+2])-(max({a[i],a[i+1],a[i+2]})+min({a[i],a[i+1],a[i+2]}))));
        }
        cout << mx << endl;
    }

    return 0;
}
