/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 11 2024 1:19:22 AM
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; cin>>a>>b>>c;
    int mx = (a>b && a>c) ? a : (b>a && b>c) ? b : c;
    cout<<mx;
    return 0;
}