#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int one = 0;
        int thr = 0;
        int len= 0;
        for(int i=1; i<n+1; i++)
        {
            if(arr[i-1]==1)
            {   
            if(one>0)
            {
                one = min(one,i);
            }
            else
            {
                one = i;
            }
            }

            else if(arr[i-1]==2)
            {
                one = 0;
                continue;
            }
            else if(arr[i-1]==3)
            {
                if(one>0)
                {
                    len = max(len,(i-one+1));
                }
                
            }

        }
        cout<<len<<endl;
    }
    return 0;
}