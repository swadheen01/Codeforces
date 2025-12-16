#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
        if(n==2){
            return true;
        }
        else{
            for(int i = 2; i<= (sqrt(n)+1); i++){
                if( n%i == 0){
                    return false;
                }
            }
            return true; //if loop comp.then prime
        }
    }

int main(){
    int n;
    cin>>n;
    int i = 1;
    if(n==2 || prime(n)){
        cout<<n<<endl;
    }
    else{
        while(true){
            if(prime(n+i)){
                cout<<n+i<<endl;
                break;
            }else{
                i++;
            }
        }
        }

    return 0;
}