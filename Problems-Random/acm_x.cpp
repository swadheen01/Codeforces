#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==1){
        return false;
    }else if(n==2){
        return true;
    }else{
        for(int i = 2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }return true;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isprime(n)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }


    return 0;
}