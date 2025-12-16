#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <cstring>

using namespace std;

// Function to calculate prime factors of a number
vector<int> getPrimeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            if (factors.empty() || factors.back() != i) {
                factors.push_back(i);
            }
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

// BFS to find the minimum steps to transform s to t
int bfs(int s, int t) {
    if (s == t) return 0;

    queue<pair<int, int>> q; // Pair of (current number, steps)
    set<int> visited;       // To avoid revisiting numbers

    q.push({s, 0});
    visited.insert(s);

    while (!q.empty()) {
        int current = q.front().first;
        int steps = q.front().second;
        q.pop();

        // Get prime factors of the current number
        vector<int> factors = getPrimeFactors(current);

        for (int factor : factors) {
            int next = current + factor;
            if (next > t || visited.count(next)) continue;

            if (next == t) return steps + 1;

            q.push({next, steps + 1});
            visited.insert(next);
        }
    }

    return -1; // Transformation to t is impossible
}

int main() {
    int T;
    cin >> T;

    for (int caseNo = 1; caseNo <= T; ++caseNo) {
        int s, t;
        cin >> s >> t;

        int result = bfs(s, t);

        cout << "Case " << caseNo << ": " << result << endl;
    }

    return 0;
}