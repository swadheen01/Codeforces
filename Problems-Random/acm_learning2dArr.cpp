#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Create a 2D vector to store the triangle
        vector<vector<int>> triangle(N, vector<int>(N, 0));

        // Input the triangle values
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                cin >> triangle[i][j];
            }
        }

        // Use dynamic programming to compute the maximum path sum
        for (int i = N - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                // Update each element with the maximum of the two adjacent elements below it
                triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
            }
        }

        // The maximum path sum is stored at the top of the triangle
        cout << triangle[0][0] << endl;
    }

    return 0;
}