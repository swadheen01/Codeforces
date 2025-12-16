#include<stdio.h>
#include<math.h>
int main(){

    double a;
    scanf("%lf",&a);

    float b= a/2.0; //or float b = (float)a/2;
    printf("%.1f\n",b);

    printf("%lf\n",sqrt(a));
    printf("%lf",cbrt(a));

    return 0;
}
/*
int main(){
    long long n;
    scanf("%lld",&n);
    long long squr = n*n;
    long long cube = n*n*n;
    printf("Square of %lld is %lld\n",n,squr);
    printf("Cube of %lld is %lld",n,cube);
}
int main(){
    int a,b,temp=0;
    printf("Enter a & b: \n");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("a is %d & b is %d",a,b);

    return 0;

}*/