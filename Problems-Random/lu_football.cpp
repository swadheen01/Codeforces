#include<bits/stdc++.h>
using namespace std;

long long findpower(long long y)
{
    long long x = floor(log2(y-1));
    return x;
}

void sir()
{
    long long n;
    cin>>n;
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        long long x = findpower(n); //after qualifier, 2^x teams for knockout.
        long long match = n*(n-1)/2; // first round.
        for(long long i=x; i>=1; i--)
        {   
            n = pow(2,i); //new team every round.
            match += n/2 ;
        }
        cout<<match<<endl;
    }
    
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}