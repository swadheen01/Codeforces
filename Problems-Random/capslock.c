#include<stdio.h>

int main()
{
    string s;
    scanf("%s",&s);
    int n = s.size();
    int flag = 1;
    for(int i=1; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            flag = 0;
        }
    }
    if(flag == 1)
    {
        for(int i = 0; i<n; i++)
        {
            if(s[i]>='a' && s[i]<='z') s[i] -= 32;
            else {s[i]+=32;}
        }
    }
    printf("%s",s);
}
