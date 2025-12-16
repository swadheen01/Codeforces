#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 1000;
    int arr[n];
    int c = 0;
    for(int i = 1; i<=1666; i++){
        if(i%3!=0 && i%10 != 3){
            arr[c] = i;
            c++ ;
        }
    }

    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<arr[k-1]<<endl;
    }
    
    return 0;
}