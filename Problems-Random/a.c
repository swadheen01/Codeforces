#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, X, Y;
        scanf("%d %d %d %d", &A, &B, &X, &Y);

        if ((A <= B && (B-A)<= X) || (A >= B && (A-B) <= Y)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
