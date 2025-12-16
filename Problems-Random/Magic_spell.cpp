#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c,n;
    cin>>x>>a>>b>>c>>n;

    int result = 1e9;

    for(int i=0; i<=200; i++)
    {
        for(int j=0; j<=200; j++)
        {
            for(int k=0; k<=200; k++)
            {
                if(x+(i*a)+(j*b)+(k*c)==n)
                {
                    result = min(result,(i+j+k));
                }
            
            }
        }
    }
    if(result != 1e9)
    {
        cout<<"YES"<<endl;
        cout<<result<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}