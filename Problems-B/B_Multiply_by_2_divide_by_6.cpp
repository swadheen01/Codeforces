#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count = 0;
        while(n != 1){
            if(n%6==0){
                n /= 6;
                count++;
            }else if(n%3 ==0){
                n *= 2;
                count ++;
            } else{
                cout<<"-1"<<endl;
                break;
            }
            
        }
        if(n==1){
            cout<<count<<endl;
        }
        
    }


    return 0;
}