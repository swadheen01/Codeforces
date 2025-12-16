#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int s=0;
    int d=0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j=1;
    int low=0, high=n-1;
    while(low<=high){
        if(j==1){
            j=0;
            if(arr[low]>arr[high]){
                s += arr[low];
                low += 1;
            }else{
                s += arr[high];
                high--;
            }
        }else{
            if(arr[low]>arr[high]){
                d += arr[low];
                low += 1;
            }else{
                d += arr[high];
                high--;
            }
            j = 1;
     
   }
    }
    cout<<s<<" "<<d<<endl;
    
    return 0;
}