//Time limit exceed 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> cont(n);
        long long sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> cont[i];
            sum += cont[i];
        }

        long long av = sum / n;
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (cont[i] > av) {
        
                long long need = cont[i] - av;
                int j = i + 1;
                bool found = false;
                while (j < n && need > 0) {
                    if (cont[j] < av) {

                        long long pour = min(need, (long long)(av - cont[j]));
                        cont[i] -= pour;
                        cont[j] += pour;
                        need -= pour;
                        found = true;
                    }
                    j++;
                }
                if (need > 0 || !found) {
                    possible = false;
                    break;
                }
            } else if (cont[i] < av) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO")<< endl;
    }

    return 0;
}
