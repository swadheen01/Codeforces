/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jan 17 2025 1:29:52 AM
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sir(int n, int k) {
 int mand = 0, mor = 0, mxor = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int tand = i & j;
            int tor = i | j;
            int txor = i ^ j;
            if (tand > mand && tand < k) {
                mand = tand;
            }
            if (tor > mor && tor < k) {
                mor = tor;
            }
            if (txor > mxor && txor < k) {
                mxor = txor;
            }
        }
    }
    printf("%d\n%d\n%d", mand, mor, mxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    sir(n, k);
 
    return 0;
}