/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Jun 30 2024 2:11:01 AM
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        int full = 24*60; //full time
        cin>>n>>H>>M;
        int st=H*60+M; //sleep start
        while(n--){
            int h,m;
            cin>>h>>m;
            int at = h*60+m; //alarm time
            int wake = at-st; //wake up
            if(wake<0) wake += 24*60; //how many time sleeps
            full = min(wake,full);
        }
        cout<<full/60<<' '<<full%60<<endl;
    }
}