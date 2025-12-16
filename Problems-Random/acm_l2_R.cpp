#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Function to convert decimal number to binary string
string decimalToBinary(int num) {
    string binary;
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    return binary;
}

// Function to convert sexagesimal time to binary clock format
pair<string, string> sexagesimalToBinaryClock(string time) {
    stringstream ss(time);
    int hours, minutes, seconds;
    char delimiter;
    ss >> hours >> delimiter >> minutes >> delimiter >> seconds;

    // Convert hours, minutes, and seconds to binary
    string hoursBinary = decimalToBinary(hours);
    string minutesBinary = decimalToBinary(minutes);
    string secondsBinary = decimalToBinary(seconds);

    // Pad binary strings to ensure each has 6 digits
    hoursBinary = string(6 - hoursBinary.size(), '0') + hoursBinary;
    minutesBinary = string(6 - minutesBinary.size(), '0') + minutesBinary;
    secondsBinary = string(6 - secondsBinary.size(), '0') + secondsBinary;

    // Combine binary strings vertically
    string verticalBinary = hoursBinary + minutesBinary + secondsBinary;

    // Combine binary strings horizontally
    string horizontalBinary;
    for (int i = 0; i < 6; ++i) {
        horizontalBinary += hoursBinary[i];
        horizontalBinary += minutesBinary[i];
        horizontalBinary += secondsBinary[i];
    }

    return {verticalBinary, horizontalBinary};
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignore newline after N

    for (int i = 1; i <= N; ++i) {
        string time;
        getline(cin, time);

        pair<string, string> binaryClocks = sexagesimalToBinaryClock(time);
        cout << i << " " << binaryClocks.first << " " << binaryClocks.second << endl;
    }

    return 0;
}
