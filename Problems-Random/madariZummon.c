#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    //scanf("%s",&s);
    fgets(s,sizeof(s),stdin);

//    size_t len = ;
//    if (len > 0 && s[len - 1] == '\n') {
//        s[len - 1] = '\0';
//    }
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==' ')
        {
            printf("\n");
        }
        else printf("%c",s[i]);
    }

    return 0;

}
