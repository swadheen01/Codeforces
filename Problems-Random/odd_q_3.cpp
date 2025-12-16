#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int n,q;
    cin>>n>>q;
    long long arr[n+1];
    arr[0]={0};
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        arr[i] = arr[i] + arr[i-1];
    }
    // for(int i = 0; i<=n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    while(q--)
    {
        long long l,r,k;
        cin>>l>>r>>k;

        long long lrsum = (l-r+1)*k;
        long long newsum= arr[l-1] + lrsum + (arr[n]-arr[r]) ;

        if(newsum%2 != 0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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