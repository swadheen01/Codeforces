#include<stdio.h>

// int max(int a1, int a2, int a3) {
//     if (a1 > a2 && a1 > a3) {
//         return a1;
//     } else if (a2 > a1 && a2 > a3) {
//         return a2;
//     } else {
//         return a3;
//     }
// }

// int min(int a1, int a2, int a3) {
//     if (a1 < a2 && a1 < a3) {
//         return a1;
//     } else if (a2 < a1 && a2 < a3) {
//         return a2;
//     } else {
//         return a3;
//     }
// }

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a1, a2, a3, b1, b2, b3;
        scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);

        int alice[3] = {a1, a2, a3};
        for (int i = 0; i < 2; ++i) {
            for (int j = i + 1; j < 3; ++j) {
                if (alice[i] > alice[j]) {
                    int temp = alice[i];
                    alice[i] = alice[j];
                    alice[j] = temp;
                }
            }
        }

        
        int bob[3] = {b1, b2, b3};
        for (int i = 0; i < 2; ++i) {
            for (int j = i + 1; j < 3; ++j) {
                if (bob[i] > bob[j]) {
                    int temp = bob[i];
                    bob[i] = bob[j];
                    bob[j] = temp;
                }
            }
        }

        int A = alice[2] * 100 + alice[1] * 10 + alice[0];
        int B = bob[2] * 100 + bob[1] * 10 + bob[0];

        if (A > B)
            printf("Alice\n");
        else if (B > A)
            printf("Bob\n");
        else
            printf("Tie\n");
    }

    return 0;
}
