#include<iostream>
using namespace std;
int main(){


    int n;
    cin>>n;
    int i;
    if(n==1){
        cout<<"Not a prime"<<endl;
    }
    for( i=2; i<n; i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }

    }
    if(i == n){
        cout<<"prime"<<endl;
    }
    

    return 0;
    

}