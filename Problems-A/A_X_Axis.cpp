/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jun 23 2024 11:18:02 PM
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int arr[3]; for(int i=0; i<3; i++) cin>>arr[i];
        sort(arr,arr+3);
        cout<<abs(arr[0]-arr[1]) + abs(arr[1]-arr[2])<<endl;
    }
    return 0;

}