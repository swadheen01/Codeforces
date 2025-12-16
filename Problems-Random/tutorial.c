//#include<stdio.h>
//int main()
//{
//    int a = 5, b = 7;
//    int *p, *q;
//
//    p = &a;
//    q = &b;
//    //printf("%p\n",q);
//    *p = *q;
//
//    printf("%d\n",*p);
//    printf("%d\n",a);
//    printf("%d\n",*q);
//    printf("%d\n",b);
//    printf("%p\n",q);
//
//    return 0;
//}

#include<stdio.h>
int main()
{
    int a = 7, b = 10;
    int *p;
    p = &a ;
    b = *p;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",b);
    int add_b = &b;
    p = (int*)add_b;
    printf("%d\n",*p);
    printf("%d\n",b);

    return 0;
}
