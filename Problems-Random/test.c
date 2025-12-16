#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int n = strlen(s);
    int flag = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            flag = 0;
        }
    }

    if (flag == 1) {
        for (int i = 0; i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
