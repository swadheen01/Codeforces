#include <iostream>
#include <vector>

using namespace std;

long long ncr[35][35];

void precompute()
{
    for (int i = 0; i < 35; i++)
    {
        ncr[i][0] = 1;
        for (int j = 1; j <= i; j++)
            ncr[i][j] = ncr[i - 1][j - 1] + ncr[i - 1][j];
    }
}

void solve()
{
    long long n, k;
    cin >> n >> k;

    int d = 0;
    long long temp = n;
    while (temp > 1)
    {
        temp >>= 1;
        d++;
    }
    // n = 2^d

    long long alice_wins = 0;

    // Check numbers a < n
    for (int L = 1; L <= d; L++)
    {
        int max_bits = k - L + 1;
        if (max_bits <= 0)
            continue;

        // Count a where 2^{L-1} <= a < 2^L and popcount(a) <= max_bits
        // Highest bit is fixed at L-1, choose remaining (max_bits-1) from (L-1) spots
        for (int c = 1; c <= min((int)L, max_bits); c++)
        {
            alice_wins += ncr[L - 1][c - 1];
        }
    }

    // Check a = n
    // f(n) = log2(n) + 1 = d + 1
    if (d + 1 <= k)
        alice_wins++;

    cout << n - alice_wins << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}