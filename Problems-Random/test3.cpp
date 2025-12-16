#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    for(int i = 0; i < n; i++) {
        cin >> B[i];
    }
    
    vector<tuple<int, int, char>> operations;
    
    for(int i = 0; i < n; i++) {
        if(A[i] != B[i]) {
            for(int j = i+1; j < n; j++) {
                if(A[j] == B[i]) {
                    if(j > i + 1) {
                        operations.push_back({i+1, j, 'D'});
                        reverse(A.begin() + i, A.begin() + j + 1);
                    }
                    operations.push_back({i+1, j+1, 'I'});
                    sort(A.begin() + i, A.begin() + j + 1);
                    break;
                }
            }
        }
    }
    
    cout << operations.size() << endl;
    for(auto& op : operations) {
        cout << get<0>(op) << " " << get<1>(op) << " " << get<2>(op) << endl;
    }
    
    return 0;
}
