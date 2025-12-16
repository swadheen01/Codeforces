#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to reverse a string
string reverseString(const string& s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to add two reversed numbers and return the reversed sum
string addReversedNumbers(const string& num1, const string& num2) {
    // Reverse the reversed numbers to get the original numbers
    string originalNum1 = reverseString(num1);
    string originalNum2 = reverseString(num2);

    // Convert the original numbers to integers and add them
    int sum = stoi(originalNum1) + stoi(originalNum2);

    // Convert the sum back to a string and reverse it to get the reversed sum
    string reversedSum = to_string(sum);
    return reverseString(reversedSum);
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string num1, num2;
        cin >> num1 >> num2;
        string reversedSum = addReversedNumbers(num1, num2);
        int ans = stoi(reversedSum);
        cout << ans << endl;
    }

    return 0;
}
