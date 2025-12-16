#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n], arr2[n];
    int sum1 = 0;
    int sum2 = 0;
    int com[n];
    int winner=0;
    int maxx=0;
    for(int i=0; i<n; i++){
        cin>>arr1[i]>>arr2[i];

        sum1 = sum1 + arr1[i];
        arr1[i] = sum1;
        sum2 += arr2[i];
        arr2[i] = sum2;
        if(arr1[i]>arr2[i]){
            if(maxx<arr1[i]-arr2[i]){
            maxx = arr1[i]-arr2[i];
            winner = 1;
            }
        }else{
            if(maxx<arr2[i]-arr1[i]){
            maxx = arr2[i]-arr1[i];
            winner = 2;
            }
        }
    }
    cout<<winner<<" "<<maxx<<endl;
    return 0;
}