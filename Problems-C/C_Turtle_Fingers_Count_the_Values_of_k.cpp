#include <bits/stdc++.h>
using namespace std; 
#define IOS  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int M = 1e6 + 5,MOD=998244353;

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
     int a,b,l;
     cin>>a>>b>>l;
     vector<int>p,q;
     p.push_back(1);
     q.push_back(1);
     int m=1;
     while(m*a<=l){
        m*=a;
        p.push_back(m);
     }
     m=1;
     while(m*b<=l){
      q.push_back(m*b);
      m*=b;
     }
     set<int>st;
     for(int i:p){
      for(int j: q){
        if((i*j)>l)continue;
        int d=(i*j);
        if(l%d==0)st.insert(l/d);
      }
     }
     cout<<(int)st.size()<<"\n";
   
    }
    return 0;
     
    
}