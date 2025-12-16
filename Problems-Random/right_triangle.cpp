
#include<bits/stdc++.h>
using namespace std;

bool sq(long long hysq)
{
    return(ceil(sqrt(hysq))==floor(sqrt(hysq)));
}

void sir(long long b)
{
    long long hi, hysq;
    long long max_peri = -1;
    long long n = floor((b*b)/2)+5;
    for(hi=n; hi>=1; hi--)
    {
        long long hysq = hi*hi + b*b;

        if (sq(hysq)) {
            long long peri = hi + b + sqrt(hysq);
            max_peri = max(max_peri, peri);
        }
    }
    if(max_peri != -1)
    {
        cout<<max_peri<<endl;
    }
    else{cout<<"-1"<<endl;}

}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {   
        long long b;
        cin>>b;
        sir(b);
    }
    return 0;
}