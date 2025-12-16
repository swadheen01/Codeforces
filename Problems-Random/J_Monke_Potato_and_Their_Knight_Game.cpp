/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 07 2024 8:36:22 PM
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x,y,x2,y2;
        cin>>x>>y>>x2>>y2;
        if((x+y)%2==(x2+y2)%2)
        {
            cout<<"Potato"<<endl;
        }
        else cout<<"Monke"<<endl;
    }
    return 0;
}