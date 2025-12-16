/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Jun 24 2024 11:43:47 PM
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        sort(arr,arr+n);
        arr[0] = arr[0] + 1;
        int ans = 1;

        for(int i=0; i<n; i++){
            ans *= arr[i];
        }
        cout<<ans<<endl;

    }
    return 0;
}