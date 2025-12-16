/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 14 2024 9:09:22 PM
 */

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll pow(ll a,ll b)
{
    for(int i=1;i<b;i++){
        a*=10;
    }
    return a;
}
int main()
{
    
    ll t,a,b,c=1,d=0,i,j,n,s,k,e=0,m=0;

    cin>>s>>n;
    b=s;
    while(1)
    {
        a=s%10;
        s=s/10;
        m=(a*c)+m;
        c*=10;
        if(m>=n)
            break;
        e++;
        if(a==9) d++;
    }
    if(e>0 && e!=d)
    {
        k= pow(10,e);
        m=b/k;
        m--;
        if(m>0)
            cout<<m;
        for(i=0; i<e; i++)
        {
            cout<<9;
        }
        cout<<endl;
    }
    else cout<<b<<endl;

    return 0;

}
