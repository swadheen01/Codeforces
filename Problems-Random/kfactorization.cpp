#include <bits/stdc++.h>
using namespace std;

vector<int> fact(int n) 
{
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n/i;
        }
    }
    if (n> 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    int n, k;
    cin>>n>>k;

    if(k==1) {
        cout << n;
        return 0;
    }

    vector<int>factors = fact(n);

    if (factors.size()<k) {
        cout << -1;
    return 0;
    }

    for(int i = 0; i < k - 1; i++) {
        cout <<factors[i]<<" ";
    }
    int last= 1;
    for (int i = k - 1; i < factors.size(); ++i) {
        last *= factors[i];
    }
    cout << last;

    return 0;
}
