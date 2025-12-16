
#include <stdio.h>

void sir(int n) {
    int i, j,k=0;

    for (i = 1; i <= n / 2; i++) {

        for (j = 1; j <= (n/2)-i+1 ; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2*i-1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = 1; i <= n - n / 2; i++) {

        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    sir(n);

    return 0;
}
