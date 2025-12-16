#include <bits/stdc++.h>
using namespace std;

#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

// Custom stack implementation
struct Stack {
    pair<int, int> arr[400]; // Stack for storing positions
    int top = -1;

    void push(int x, int y) {
        arr[++top] = {x, y};
    }

    pair<int, int> pop() {
        return arr[top--];
    }

    bool empty() {
        return top == -1;
    }
};

bool isValidMaze(int m, int n, vector<string>& maze) {
    vector<pair<int, int>> openings;

    // Identify openings on the edges
    for (int i = 0; i < m; i++) {
        if (maze[i][0] == '.') openings.push_back({i, 0});
        if (maze[i][n - 1] == '.') openings.push_back({i, n - 1});
    }
    for (int j = 0; j < n; j++) {
        if (maze[0][j] == '.') openings.push_back({0, j});
        if (maze[m - 1][j] == '.') openings.push_back({m - 1, j});
    }

    // If there are not exactly two openings, the maze is invalid
    if (openings.size() != 2) return false;

    // Check if a path exists between the two openings using a stack
    pair<int, int> start = openings[0];
    pair<int, int> end = openings[1];
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    Stack stack;

    stack.push(start.first, start.second);
    visited[start.first][start.second] = true;

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while (!stack.empty()) {
        auto [x, y] = stack.pop();

        // If we reach the second opening, the maze is valid
        if (x == end.first && y == end.second) return true;

        // Explore all valid neighbors
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && maze[nx][ny] == '.') {
                stack.push(nx, ny);
                visited[nx][ny] = true;
            }
        }
    }

    // If we exhaust all possibilities and can't reach the second opening, it's invalid
    return false;
}

int main() {
    ALLAHU_AKBAR
    int t;
    cin >> t;

    while (t--) {
        int m, n;
        cin >> m >> n;

        vector<string> maze(m);
        for (int i = 0; i < m; i++) {
            cin >> maze[i];
        }

        if (isValidMaze(m, n, maze)) {
            cout << "valid\n";
        } else {
            cout << "invalid\n";
        }
    }

    return 0;
}
