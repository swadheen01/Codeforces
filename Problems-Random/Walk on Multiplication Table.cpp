#include<bits/stdc++.h>
using namespace std;

/*bool prime(long long n){
        if(n==2 || n==3){
            return true;
        }
        else{
            for(long long i = 2; i<= (sqrt(n)+1); i++){
                if( n%i == 0){
                    return false;
                }
            }
            return true; //if loop comp.then prime
        }
    }*/
    int main(){
        long long n;
        cin>>n;
        /*if(prime(n)){
            cout<<n-1<<endl;
        }else{*/
        vector<long long int> arr;
        long long x = ceil(sqrt(n));
        long long ans = 1e13;
        for(long long i= 1; i<=x;i++){
            if(n%i==0){
                if(((i-1)+(n/i)-1)<ans){
                    ans = ((i-1)+(n/i)-1);
                }
            }
        
        }cout<<ans<<endl;


        return 0;
    }