#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long arr[n];
    long long arr2[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        
    }
    
    for(int i=0; i<n; i++)
    {
        int mx,mn;
        if(i==0){
            mn = abs(arr[i+1]-arr[i]);
            mx = abs(arr[n-1]-arr[i]);
        }
        else if(i==n-1)
        {
            mn = abs(arr[i]-arr[i-1]);
            mx = abs(arr[i]-arr[0]);
        
        }
        else{
            mn = min(abs(arr[i]-arr[i-1]), abs(arr[i+1]-arr[i]));
            mx = max(abs(arr[n-1]-arr[i]), abs(arr[0]-arr[i]));
        }
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;

    
}