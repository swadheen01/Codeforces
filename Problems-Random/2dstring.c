#include <stdio.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 20

int main() {
    // Initializing a 2D string array
    char strings[MAX_STRINGS][MAX_LENGTH] = {
        "Alice",
        "Bob",
        "Charlie",
        "David",
        "Eve"
    };

    // Printing the 2D string array
    printf("List of names:\n");
    for (int i = 0; i < MAX_STRINGS; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 100

int main() {
    char names[MAX_STRINGS][MAX_LENGTH];

    printf("Enter %d names:\n", MAX_STRINGS);
    for (int i = 0; i < MAX_STRINGS; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], MAX_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';  // Remove newline character
    }

    printf("\nList of names:\n");
    for (int i = 0; i < MAX_STRINGS; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
