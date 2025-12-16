#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);

        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        int maxx = 0;
        int c = 0;

        for (int i = 0; i < N; ++i) {
            if (arr[i] == 1) {
                c++;
            else if(arr[i]==2) {
                c = 0;
            }
            } else if (arr[i] == 3) {
                maxx = max(maxx, c);
                
                    c=0;

            } 
            else{
                c++;
            }
        }

        maxx = max(maxx, c);

        cout << maxx << endl;
    }

    return 0;
}
