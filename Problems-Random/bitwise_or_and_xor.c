/*Swadheen Islam Robi*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void sir(int n, int k)
{
    int i,j,max_or = 0, max_and = 0, max_xor = 0;
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            int x = i&j; int y = i|j; int z = i^j;
            if(x<k && x > max_and) max_and = x;
            if(y<k && y > max_or) max_or = y;
            if(z<k && z > max_xor) max_xor = z;

        }
    }
    printf("%d\n%d\n%d\n",max_and, max_or, max_xor);
}



int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    sir(n,k);
}
