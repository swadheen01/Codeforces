#include<iostream>

using namespace std;

int main ()
{
int t;cin>>t;
while(t--)
{
int n;cin>>n;
int a[n];int x=0;
for(int i=0;i<n;i++)
{
cin>>a[i];
if(a[i]%2!=0)x++;
}
if(x%2==0)cout <<"YES"<<endl;
else cout<<"NO"<<endl;
}



}