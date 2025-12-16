#include<stdio.h>
void up(int *a, int *b)
{
    *a = 10;
    *b = 20;
    printf("%d\n",a);
}

int main()
{
    int a,b;
    a =5; b = 9;
    up(&a, &b);
    printf("%d",a);
    return 0;
}
