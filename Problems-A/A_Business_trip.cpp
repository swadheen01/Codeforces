#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int arr[12];
    for(int i=0; i<12; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + 12);
    int summ =0;
    if(k==0)
    {
        cout<<0<<endl;
    }
    else{
        int flag = 1;
        for(int i=11; i>=0; i--)
        {
        summ += arr[i];
        if(summ>=k)
        {
            cout<<12-i<<endl;
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
        
        }
        if(flag == 0)
        {
            cout<<-1<<endl;
        }
    
    }
    return 0;
}