#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,c=0;

    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int j = 0; j<n; j++){
            cin>>arr[j];
        }
        for(int i=0; i<n; i++){
            if(arr[i]!=arr[i+1]){
                if(arr[i+1]==arr[i+2])
                    c = i+1;
                else
                    c = i+2;
                break;
                
            }
        }
        cout<<c<<endl;
    }

    return 0;
}