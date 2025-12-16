/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Oct 25 2024 4:01:38 PM
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int NUM = 1e5 + 5;
int n, minn = INT_MAX;
int a[NUM];

bool ok(int num)
{
    for (int i = 1; i <= n; ++i)
        if ((a[i] % num !=0) && a[i]/2 < num)
            return false;
    return true;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        minn = min(minn, a[i]);
    }
    int ans = (minn - 1) / 2;
    for (int i = 1; i * i <= minn; ++i)
    {
        if (minn % i == 0)
        {
            if (ok(i))
                ans = max(ans, i);
            if (ok(minn / i))
                ans = max(ans, minn / i);
        }
    }
    cout << ans;
    return 0;
}