//#include <stdio.h>
//
//int main() {
//    int n;
//    printf("Enter the value of n: ");
//    scanf("%d", &n);
//
//    // Calculate the size of the pattern (2n - 1) x (2n - 1)
//    int size = 2 * n - 1;
//
//    // Fill and print the pattern
//    int i, j;
//    for (i = 0; i < size; i++) {
//        for (j = 0; j < size; j++) {
//            // Calculate the minimum distance to the boundary
//            int min_dist = i < j ? i : j;
//            min_dist = min_dist < size - i ? min_dist : size - i - 1;
//            min_dist = min_dist < size - j - 1 ? min_dist : size - j - 1;
//
//            // Print the value n - min_dist
//            printf("%d ", n - min_dist);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the size of the pattern (2n - 1) x (2n - 1)
    int size = 2 * n - 1;

    // Fill and print the pattern
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            // Calculate the minimum distance to the boundary
            int min_dist;
            if (i < j)
                min_dist = i;
            else
                min_dist = j;

            if (min_dist < size - i)
                min_dist = min_dist;
            else
                min_dist = size - i - 1;

            if (min_dist < size - j - 1)
                min_dist = min_dist;
            else
                min_dist = size - j - 1;

            // Print the value n - min_dist
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }

    return 0;
}
