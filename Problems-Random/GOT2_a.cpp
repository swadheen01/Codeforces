// #include <iostream>
// #include <vector>
// #include <numeric>

// using namespace std;

// // Function to calculate Greatest Common Divisor (GCD)
// long long gcd(long long a, long long b) {
//     while (b) {
//         a %= b;
//         swap(a, b);
//     }
//     return a;
// }

// // Function to calculate Least Common Multiple (LCM)
// long long lcm(long long a, long long b) {
//     return (a / gcd(a, b)) * b;
// }

// int main() {
//     long long n;
//     cin >> n;

//     vector<int> divisors = {2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int m = divisors.size();
//     long long totalDivisible = 0;

//     // Inclusion-Exclusion Principle
//     for (int i = 1; i < (1 << m); ++i) {
//         long long lcmValue = 1;
//         int bitsCount = 0;
//         for (int j = 0; j < m; ++j) {
//             if (i & (1 << j)) {
//                 lcmValue = lcm(lcmValue, divisors[j]);
//                 ++bitsCount;
//             }
//         }
//         if (bitsCount % 2 == 1) {
//             totalDivisible += n / lcmValue;
//         } else {
//             totalDivisible -= n / lcmValue;
//         }
//     }

//     long long result = n - totalDivisible;
//     cout << result << endl;
    
//     return 0;
// }
#include <iostream>

int main() {
    long long a;
    std::cin >> a;
    
    long long result = a
                     - a / 2
                     - a / 3
                     - a / 5
                     - a / 7
                     + a / 6
                     + a / 10
                     + a / 14
                     + a / 15
                     + a / 21
                     + a / 35
                     - a / 30
                     - a / 105
                     - a / 70
                     - a / 42
                     + a / 210;
    
    std::cout << result << std::endl;
    
    return 0;
}
