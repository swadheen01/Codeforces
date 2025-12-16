#include <stdio.h>

int main() {
    char sent[1000];
    scanf("%s",sent);

    int freq[10] = {0};
    for(int i=0; sent[i] != '\0'; i++)
    {
        if(sent[i] >= '0' && sent[i]<='9')
        {
            int dig = sent[i]-'0';
            freq[dig]++;
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",freq[i]);
    }
    return 0;


}
