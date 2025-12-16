/*
 *   Copyright (c) 2024 
 *   All rights reserved.
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n; cin>>s>>n;
    int x,y;
    int arrx[n], arry[n];
    for(int i=0; i<n; i++)
    {
        cin>>arrx[i];
        cin>>arry[i];
    }
    
    sort(arrx, arrx+n);
    for(int i=0; i<n; i++)
    {
        cout<<arrx[i]<<" ";
        
    }
    if(arrx[0]>s) cout<<"NO"<<endl;
    else{
        int flag = 1;
        for(int i=1; i<n; i++)
        {
            if(s+arry[i-1]<arrx[i]){
                flag = 0;
                break;}
        }
        if(flag==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}