#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>arr;
    for(long long i=1; i<=(sqrt(n)); i++){
        if(n%i==0){
            if (i==n/i){
                arr.push_back(i);
            }else{
                arr.push_back(i);
                arr.push_back(n/i);
            }
            
        }
    }
    
    sort(arr.begin(), arr.end());
    for(long long i: arr){
        cout<<i<<endl;
    }

    return 0;
}