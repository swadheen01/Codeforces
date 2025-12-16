/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Aug 26 2025 12:55:48 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ALLAHU_AKBAR             \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void sir()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    vector<int> ans;

    // Traverse diagonals
    for (int d = 0; d < m + n - 1; d++)
    {
        for (int i = 0; i < m; i++)
        {
            int j = d - i;
            if (j >= 0 && j < n)
            {
                ans.push_back(mat[i][j]);   //if mat[j][i] then reverse order
            }
        }
    }

    for (int x : ans)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    ALLAHU_AKBAR

    int t = 1;
    // If multiple test cases needed: cin >> t;
    while (t--)
    {
        sir();
    }
    return 0;
}
