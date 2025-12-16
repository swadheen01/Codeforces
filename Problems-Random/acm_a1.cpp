#include<bits/stdc++.h>
using namespace std;
int main(){

    double x,y;
    cin>>x>>y;
    int z = x*100;
    int c = 50;
    
    if(z%500 == 0 && (z+ c)<= y*100){
         y -= ( x+0.5);
    }

    printf("%.2f\n", y);
    return 0;
}