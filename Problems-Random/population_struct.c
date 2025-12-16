#include<stdio.h>
#include<string.h>

struct c
{
    char name[20];
    int pop;
    char tk[20];
};

int main()
{
    struct c arr[3];

    strcpy(arr[0].name, "Bangladesh");
    arr[0].pop = 170;
    strcpy(arr[0].tk, "Taka");

    strcpy(arr[1].name, "India");
    arr[1].pop = 1600;
    strcpy(arr[1].tk, "Rupee");

    strcpy(arr[2].name, "USA");
    arr[2].pop = 320;
    strcpy(arr[2].tk, "Dollar");

    int mx = -1;
    char ans[20];

    for(int i=0; i<3; i++)
    {
        if(arr[i].pop > mx)
        {
            mx = arr[i].pop;
            strcpy(ans, arr[i].name);
        }
    }
    printf("%s\n", ans);

    return 0;
}
