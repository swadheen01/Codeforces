/*Swadheen Islam Robi*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int recursion(int n)
{
    int summ;
    if(n==1) return 1;
    else summ = n + recursion(n-2);
    return summ;


}
int rec2(int n)
{
    int summ;
    if(n==2) return 2;
    else summ = n+ rec2(n-2);
    return summ;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0) n--;

    int odd_summ = recursion(n);

    printf("%d\n",odd_summ);
    if(n%2 != 0) n--;
    printf("%d\n",rec2(n));

    return 0;
}
