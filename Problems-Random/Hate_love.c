#include <stdio.h>
#include <string.h>

int main() {
    char sent[1000];

    fgets(sent, sizeof(sent), stdin);

    int len = strlen(sent);
    for (int i = 0; i < len; i++) {
        if (sent[i] == 'h' && sent[i + 1] == 'a' && sent[i + 2] == 't' && sent[i + 3] == 'e') {
            sent[i] = 'l';
            sent[i + 1] = 'o';
            sent[i + 2] = 'v';
            sent[i + 3] = 'e';
        }
    }

    printf("%s\n", sent);

    return 0;
}
