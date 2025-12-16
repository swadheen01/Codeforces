#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int n,q;
    cin>>n>>q;
    long long arr[n];
    long long arr2[n] = {0};
    long long arr3[n] = {0};
    long long odd= 0;
    long long odd2 = 0;
    long long summ1 = 0;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
        summ1 += arr[i];
        if(arr[i]%2 != 0){
            arr2[i] = odd + 1;
            odd = arr2[i];
        }else{
        arr2[i]= odd;
        }
    }
    for(int i = n-1; i>=0; i--)
    {
        if(arr[i]%2 != 0){
            arr3[i] = odd2 + 1;
            odd2 = arr3[i];
        }else{
        arr3[i]= odd2;
        }
    }
    for(int i=0; i<n; i++)
    {

        cout<<arr2[i]<<" ";
    } cout<<endl;
    for(int i=0; i<n; i++)
    {

        cout<<arr3[i]<<" ";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sir();
    }
}
