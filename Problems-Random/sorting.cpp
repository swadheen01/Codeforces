#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {23,12,23,93,12,45,47,65};
    int n = sizeof(arr)/sizeof(int);

    //sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
