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
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

int sir(int n) {
    int count = 0;
    unordered_set<int> prime_set(primes.begin(), primes.end()); // Store primes in a hash set

    for (int p : primes) {
        if (p > n) break; // Stop if prime exceeds n
        
        // Check if (N + p) is a prime
        if (prime_set.count(n + p)) {
            count++;
        }
    }

    return count; // Return the count of unique N-subtractorizations
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
