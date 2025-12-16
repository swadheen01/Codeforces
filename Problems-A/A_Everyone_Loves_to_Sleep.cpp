/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jun 29 2024 5:06:05 PM
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,h,m; cin>>n>>h>>m;

        int h2,m2;
        int arrh[n];
        int arrm[n];
        for(int i=0;i<n;i++)
        {
            cin>>arrh[i];
            cin>>arrm[i];
        }
        //sort(arrh, arrh+n);
        sort(arrm, arrm+n);
        int flag1 = 0;
        int flag2 = 0;
        for(int i=0; i<n; i++)
        {
            if(arrh[i]==h) flag1 = 1;
            if(arrm[i]==m) flag2= 1;
        }
        h2 = arrh[n-1];
        m2 = arrm[n-1];
        int hour,mins;
        if(h>h2)
        {
            if(m<=m2){
            hour = 24-h + h2;
            mins = m2-m;
            }
            else{
                hour = 24-h + h2 -1;
                mins = 60 - m + m2;
            }  
        }
        else if(h<h2)
        {
            if(m>m2){
            hour = h2-h-1;
            mins = 60-m + m2;
            }
            else{
                hour = h2-h;
                mins = m2-m;
            }
        
        }
        else if(h>h2 && m>m2)
        {
            hour = 23-h + h2;
            mins = 60-m + m2;
        }
        else{
            hour = h2-h;
            mins = m2-m;
        }
        if(hour<0) hour = 0;
        if(mins<0) mins = 0;
        if(flag1==1 && flag2==1){hour=0; mins = 0;}
        cout<<hour<<" "<<mins<<endl;
        //cout<<h2<<" "<<m2<<endl;
    }
    return 0;
}