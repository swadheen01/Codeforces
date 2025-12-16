#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
                int max_dist;

            int dist_row = abs(n - i - 1);
            int dist_col = abs(n - j - 1);
            if(dist_row>dist_col){
                    max_dist = dist_row;
            }
            else{
                    max_dist = dist_col;
            }

            int value = max_dist+1;

            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}
