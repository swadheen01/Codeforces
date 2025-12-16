/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 11 2024 10:01:54 PM
 */

#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int n, m, k;
      cin >> n >> m >> k;
      string s;
      cin >> s;
      int pos = m - 1;
      int sw = 0;
      int fail = 0;
      for(int i = 0; i < s.size(); i++){
        char act = s[i];
        if(act == 'L'){
          pos = m;
        }
        else if(act == 'W'){
          if(pos <= 0) sw++;
        }
        else{
          if(pos <= 0) fail++;
        }
        pos--;
      }
      
      if(sw > k)fail++;
      
      if(fail==0)
      {
        cout<<"YES\n";
      }
      else cout<<"NO\n";
}
int main() 
{
    int t;
    cin >> t;
    while(t--){
        sir();
       }
    return 0;
}