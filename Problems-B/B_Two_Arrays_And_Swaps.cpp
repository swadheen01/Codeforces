/*Swadheen Islam Robi*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];int b[n];

        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);
        int x=0;
        for(int i=0;i<n;i++)
        {
           if(i<k)
           {
           if(a[i]<b[n-1-i])x+=b[n-1-i];
           else x+=a[i];
           }
           else x+=a[i];
        }
        cout<<x<<endl;
    }
}