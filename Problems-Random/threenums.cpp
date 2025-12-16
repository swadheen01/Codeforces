#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,x;
    cin>>a>>b>>c>>x ;
    int d = max({a,b,c,x});
    int a1, a2, a3;
    if (d==a){
        a1 = a-b;
        a2 = a-c;
        a3 = a-x;
    } else if(d==b){
        a1 = b-a;
        a2 = b-c;
        a3 = b-x;
    }else if(d==c){
        a1 = c-a;
        a2 = c-b;
        a3 = c-x;    
    }else{
        a1 = x-a;
        a2 = x-b;
        a3 = x-c;
    }
    
    cout<< a1 <<" "<< a2 <<" "<< a3<<endl;
   
    

    return 0;





}