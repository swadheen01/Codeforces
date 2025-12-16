/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jul 07 2024 8:40:18 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void sir()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i] = (i+1)*(i+1);
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;

}
int main(){
    int t; cin>>t;
    while(t--) sir();
}