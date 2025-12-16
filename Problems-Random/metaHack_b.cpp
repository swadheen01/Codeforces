/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Oct 06 2024 12:01:43 AM
 */

#include <bits/stdc++.h>
using namespace std;
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);
const int MX = 1e7 + 1;

bool is_prime[MX];
vector<int> primes;

void sieve(int n) {
    fill(is_prime, is_prime + n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
    if (is_prime[i]) primes.push_back(i);
    }
}

int sir(int n) {
    int count = 0;

    for (int p : primes) {
        if (p > n) break;
        for (int q1 : primes) {
            if (q1 > n) break;
            int q2 = q1 - p;

            if (q2 >= 2 && is_prime[q2] && q2 <= n) {
                count++;
                break;
            }
        }
    }

    return count;
}

int main() {
    ALLAHU_AKBAR;
    sieve(MX);

    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n;
        cin >> n;
        cout << "Case #" << i << ": " << sir(n) << '\n';
    }

    return 0;
}
