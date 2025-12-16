/*Swadheen Islam Robi*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int find_nth(int n,int a, int b,int c)
{
    if(n==1) return a;
    else if(n==2) return b;
    else if(n==3) return c;
    else return find_nth(n-1,a,b,c) + find_nth(n-2, a,b,c) + find_nth(n-3,a,b,c);
}

int main()
{
    int n;
    scanf("%d",&n);

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int ans = find_nth(n,a,b,c);
    printf("%d\n",ans);

    return 0;
}
