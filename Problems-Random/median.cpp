/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jun 06 2024 6:03:25 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll arr[n];
    }
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<<arr[n/2]<<endl;

    return 0;
}