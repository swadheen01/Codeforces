#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=1;i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<j;
        }
        int space = 2*n - 2*i;
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }for(int j=i-1; j>=0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1; i--){
        for(int j=0; j<i; j++){
            cout<<j;
        }
        int space = 2*n - 2*i;
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }for(int j=i-1; j>=0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}