#include<stdio.h>
int print_number(int a){
    if (a==0){
    return 1;
    }
    int ans=a-print_number(a-2);
    printf("%d\n",ans);
    return 0;
}
void main(){
    int a;
    scanf("%d",&a);
    print_number(a);
 
}