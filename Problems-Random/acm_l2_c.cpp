#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string> 
using namespace std;

#define SIZE 26
#define LIM 100

int main() {
    int alphabet[SIZE];
    int result = 0;
    int n;
    char string[LIM], s1[LIM];

    cin.getline(s1, LIM);
    n = atoi(s1);

    for (int k = 0; k < n; k++) {
        result = 0;
        for (int i = 0; i < SIZE; i++)
            alphabet[i] = 0;

        cin.getline(string, LIM);
        for (int j = 0; string[j] != '\0' && string[j] >= 'a' && string[j] <= 'z'; j++)
            alphabet[string[j] - 'a']++;

        cin.getline(string, LIM);
        for (int j = 0; string[j] != '\0' && string[j] >= 'a' && string[j] <= 'z'; j++)
            alphabet[string[j] - 'a']--;

        for (int i = 0; i < SIZE; i++) {
            result += abs(alphabet[i]);
        }
        cout << "Case #" << k + 1 << ":  " << result << endl;
    }
    return 0;
}
