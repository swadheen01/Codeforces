#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n+1];
    a[0]=0;
    int b[n+1];
    b[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i]+a[i-1];
    }
    
    for(int i=0;i<=n;i++)  cout<<a[i]<<" "; cout<<endl;
    int q; cin>>q;
    while(q--)
    {
        int l,r; cin>>l>>r;
        cout<<a[r]-a[l-1]<<endl;
    }
}