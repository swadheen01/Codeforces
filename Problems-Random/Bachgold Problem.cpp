#include<bits/stdc++.h>
using namespace std;
bool tprime(int n) //any number 2 div booked, just 2 needed to make false
{
    if(n<=1){
        return false;
    }
    if(n<=3){ //it will be false after
        return true;
    }
    if (n%2==0 || n%3==0){
        return false;
    } else{

    for (long long i = 5; i * i <= n; i+=6) {
        if (n % i == 0 || n%(i+2)==0){
            return false;
        }
    } 
    return true;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        long long m,sq;
        cin>>m;
        sq = ceil(sqrt(m));
        if(tprime(sq) && sq*sq == m ){ //for just perfect sq
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}