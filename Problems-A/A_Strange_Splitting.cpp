/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jun 09 2024 10:53:02 PM
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        bool yes = true;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] != arr[i+1]) 
            {  
                yes = false;
                break;
            }
        }
        if(yes) cout<<"NO"<<endl;
        else{
            cout << "YES" << endl;
            string c(n, 'R');
            c[1] = 'B';
            cout << c << endl;
        }
    }
    return 0;
}