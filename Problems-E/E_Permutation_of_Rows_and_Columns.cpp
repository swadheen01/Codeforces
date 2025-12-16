#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define MOD 1000000007
#define MOD2 998244353

// Function to read a line of input
string input() {
    string s;
    getline(cin, s);
    return s;
}

// Function to read an integer input
int inputInt() {
    return stoi(input());
}

// Function to split a string into integers
vector<int> splitToInt(string s) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = s.find(' ')) != string::npos) {
        result.push_back(stoi(s.substr(0, pos)));
        s.erase(0, pos + 1);
    }
    result.push_back(stoi(s));
    return result;
}

// Function to transpose a matrix
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> transposed(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

// Function to solve each test case
void solveTestCase() {
    int n, m;
    vector<int> nm = splitToInt(input()); // Read n and m
    n = nm[0];
    m = nm[1];
    vector<vector<int>> grid1(n);
    vector<vector<int>> grid2(n);
    for (int i = 0; i < n; i++) {
        grid1[i] = splitToInt(input()); // Read grid1
    }
    for (int i = 0; i < n; i++) {
        grid2[i] = splitToInt(input()); // Read grid2
    }

    // Check if n equals m
    if (n == m) {
        set<set<int>> stt;
        // Check for uniqueness of rows in grid1
        for (auto row : grid1) {
            set<int> cur(row.begin(), row.end());
            stt.insert(cur);
        }
        // Check if rows of grid2 are present in grid1
        for (auto row : grid2) {
            set<int> cur(row.begin(), row.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        // Transpose grid1 and grid2
        grid1 = transpose(grid1);
        grid2 = transpose(grid2);
        stt.clear();
        // Check for uniqueness of columns in transposed grid1
        for (auto row : grid1) {
            set<int> cur(row.begin(), row.end());
            stt.insert(cur);
        }
        // Check if columns of transposed grid2 are present in transposed grid1
        for (auto row : grid2) {
            set<int> cur(row.begin(), row.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    } else {
        set<set<int>> stt;
        // Check for uniqueness of rows in grid1
        for (auto row : grid1) {
            set<int> cur(row.begin(), row.end());
            stt.insert(cur);
        }
        // Check if rows of grid2 are present in grid1
        for (auto row : grid2) {
            set<int> cur(row.begin(), row.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        stt.clear();
        // Check for uniqueness of columns in grid1
        for (int j = 0; j < m; j++) {
            set<int> cur;
            for (int i = 0; i < n; i++) {
                cur.insert(grid1[i][j]);
            }
            stt.insert(cur);
        }
        // Check if columns of grid2 are present in grid1
        for (int j = 0; j < m; j++) {
            set<int> cur;
            for (int i = 0; i < n; i++) {
                cur.insert(grid2[i][j]);
            }
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}

int main() {
    int t = inputInt(); // Read number of test cases
    for (int i = 0; i < t; i++) {
        solveTestCase(); // Solve each test case
    }
    return 0;
}
