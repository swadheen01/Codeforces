#include <stdio.h>

//Function to calculate factorial recursively
int fact(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: multiplying n by the factorial of n-1
        return n * fact(n - 1);  //here it is calling the fact function again
    }
}
int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, fact(num));
    return 0;
}
