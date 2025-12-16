#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long int num;
        long long int count = 0;
        scanf("%lld", &num);
        
        while (num != 1) {
            if (num % 6 == 0) {
                num /= 6;
                count++;
            } else if (num % 3 == 0) {  
                num *= 2;
                count++;
            } else {
                printf("-1\n");
                break; 
            }
        }
        
        if (num == 1) {
            printf("%lld\n", count);
        }
    }
    
    return 0;
}
