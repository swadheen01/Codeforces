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
    
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
        
        if(arr[i]%2 != 0){
            arr2[i] = ++odd;
            //odd = arr2[i];
        }else{
        arr2[i]= odd;
        }
    }
    for(int i = n-1; i>=0; i--)
    {
        if(arr[i]%2 != 0){
            arr3[i] = ++odd2;
            //odd2 = arr3[i];
        } else{
        arr3[i]= odd2;
        }
    }

    while(q--)
    {
        long long l,r,k,odd_num;
        cin>>l>>r>>k;
        if(l == 1 && r!=n)
        {
            odd_num = arr3[r];
        }
        else if(r==n && l != 1){
            odd_num = arr2[l-2];
        }
        else if(l==1 && r==n){
            odd_num = 0;
        }
        else{
            odd_num = arr2[l-2] + arr3[r];
        }
        
        long long num = (r-l + 1)*k;

        // if(odd_num%2==0)
        // {
        //     odd_num = 0;
        // }
        // else{odd_num = 1;}

        if((odd_num + num)%2==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
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