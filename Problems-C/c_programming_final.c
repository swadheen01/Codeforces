#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char s[100];
        scanf("%c",&s);
        printf("%s",s);
    }
    return 0;
}
