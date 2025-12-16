/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Wed Jul 17 2024 9:01:44 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
     int n, k;
     cin>>n>>k;
     string s, t;
     cin>>s>>t;
    if(s==t && (s=="01"|| s=="10")&& k%2==1){
        cout<<"NO"<<endl;
        continue;
    }
     int mis = 0, c = 0, eq = 0;
     for(auto i = 0;i<n;i++){
         if(s[i]!=t[i]){
             mis++;
             c+=s[i]-'0';
         }
         else{
             eq++;
         }
         
     }
     if(mis==2&&n==2&&k%2==0){
         cout<<"NO"<<endl;
         continue;
     }
     if(mis==c*2 && c<=k){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
}

return 0;

}