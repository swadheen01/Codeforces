#include <iostream>
#include <cmath>

int countDivisors(int n) {
    int totalDivisors = 1;
    int count;
    
    // Check for number of 2s in the factorization
    count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    totalDivisors *= (count + 1);
    
    // Check for other prime factors
    for (int i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        totalDivisors *= (count + 1);
    }
    
    // If n is a prime number greater than 2
    if (n > 2) {
        totalDivisors *= 2;
    }
    
    return totalDivisors;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Total number of divisors: " << countDivisors(n) << std::endl;
    return 0;
}
