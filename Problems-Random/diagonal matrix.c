//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//// Function to check if a character is an alphabet
//int isAlphabet(char ch) {
//    return isalpha(ch);
//}
//
//// Function to convert the string to lowercase
//void toLower(char *str) {
//    for (int i = 0; str[i] != '\0'; i++) {
//        str[i] = tolower(str[i]);
//    }
//}
//
//// Function to remove non-alphabetic characters from the string
//void removeNonAlphabets(char *str) {
//    int j = 0;
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (isAlphabet(str[i])) {
//            str[j++] = tolower(str[i]);
//        }
//    }
//    str[j] = '\0';
//}
//
//// Function to check if a string is a palindrome
//int isPalindrome(char *str) {
//    int length = strlen(str);
//    for (int i = 0; i < length / 2; i++) {
//        if (str[i] != str[length - i - 1]) {
//            return 0; // Not a palindrome
//        }
//    }
//    return 1; // Palindrome
//}
//
//int main() {
//    char input[100];
//
//    // Input string
//    printf("Enter a string: ");
//    fgets(input, sizeof(input), stdin);
//
//    // Remove non-alphabetic characters
//    removeNonAlphabets(input);
//
//    // Check if the resulting string is palindrome
//    if (isPalindrome(input)) {
//        printf("The filtered string is a palindrome.\n");
//    } else {
//        printf("The filtered string is not a palindrome.\n");
//    }
//
//    return 0;
//}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function to remove non-alphabetic characters from the string
void removeNonAlphabets(char *str, char *filteredStr) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            filteredStr[j++] = tolower(str[i]);
        }
    }
    filteredStr[j] = '\0';
}

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char input[100];
    char filteredStr[100];

    // Input string
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove non-alphabetic characters
    removeNonAlphabets(input, filteredStr);

    // Check if the resulting string is palindrome
    if (isPalindrome(filteredStr)) {
        printf("The filtered string is a palindrome.\n");
    } else {
        printf("The filtered string is not a palindrome.\n");
    }

    return 0;
}
//// Function to check if a string is a palindrome
//int isPalindrome(char *str) {
//    int length = strlen(str);
//    for (int i = 0; i < length / 2; i++) {
//        if (str[i] != str[length - i - 1]) {
//            return 0; // Not a palindrome
//        }
//    }
//    return 1; // Palindrome
//}
