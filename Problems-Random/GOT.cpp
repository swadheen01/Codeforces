#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int n;
      n=(s.size())/2;
      int count = 1;
      for(int i=1;i<n;i++)
      {
        if(s[i-1]==s[i]){
            count++;
        }
      }
    //   cout<<n<<endl;
    //   cout<<count<<endl;
      if(n==count)cout<<"NO\n";
      else cout<<"YES\n";
    }    
}