#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

#define SIZE 26
#define LIMIT 100

int main() {
    int alphabet[SIZE];
    int result = 0;
    int n;
    char *string, *pomoc;
    string = new char[LIMIT];
    pomoc = new char[LIMIT];
    n = atoi(fgets(pomoc, LIMIT, stdin));

    for (int k = 0; k < n; k++) {
        result = 0;
        for (int i = 0; i < SIZE; i++)
            alphabet[i] = 0;

        fgets(string, LIMIT, stdin);
        for (char *p = string; *p >= 'a' && *p <= 'z'; p++)
            alphabet[*p - 'a']++;

        fgets(string, LIMIT, stdin);
        for (char *pc = string; *pc >= 'a' && *pc <= 'z'; pc++)
            alphabet[*pc - 'a']--;

        for (int i = 0; i < SIZE; i++) {
            result += abs(alphabet[i]);
        }

        std::cout << "Case #" << k + 1 << ":  " << result << std::endl;
    }

    delete[] string;
    delete[] pomoc;

    return 0;
}
