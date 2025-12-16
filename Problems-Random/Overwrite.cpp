#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        vector<int> B(M);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < M; i++) {
            cin >> B[i];
        }

        vector<vector<int>> rotations;
        for (int i = 0; i < M; i++) {
            vector<int> rotated(M);
            for (int j = 0; j < M; j++) {
                rotated[j] = B[(i + j) % M];
            }
            rotations.push_back(rotated);
        }

        sort(rotations.begin(), rotations.end());
        const vector<int>& min_rotation = rotations[0];

        map<int, int> replacement_map;
        for (int i = 0; i < M; i++) {
            replacement_map[B[i]] = min_rotation[i];
        }

        for (int i = 0; i < N; i++) {
            if (replacement_map.count(A[i])) {
                A[i] = replacement_map[A[i]];
            }
        }

        for (int i = 0; i < N; i++) {
            cout << A[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
