/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jul 09 2024 11:26:17 PM
 */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void sir()
{
    string s; cin>>s;
    int n = s.length();
    char first = s[0];
    char last = s[n-1];
    char thr;
    
   int c1=0, c2=0,c3=0;
   for(int i=0; i<n;i++)
   {
       if(s[i]==first) c1++;
       else if(s[i]==last) c2++;
       else {thr = s[i]; c3++;}
   }
   
//    int mx = max({c1,c2,c3});
//    int mn = min({c1,c2,c3});
   if(max({c1,c2})!=(c1+c2+c3)-max({c1,c2})){
            cout<<"NO\n";
            return;
        }
   int opn = 0, clos =0;
    if(max(c1,c2)==c1)
    {
        for(int i=0; i<n; i++)
        {
            if(s[i]==first) opn++;
            else opn--;
            if(opn<0) {cout<<"NO\n"; return;}
        }//Plus minus hoye 0 howar kotha
        if(opn>0){cout<<"NO\n"; return;}
    }
    
    else{
        for(auto i:s){
            if(i==first || i==thr) opn++;
            else opn--;

            if(opn<0){cout<<"NO\n";return;}
        }
        if(opn>0){cout<<"NO\n"; return;}
    }
    cout<<"YES\n"; return;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}