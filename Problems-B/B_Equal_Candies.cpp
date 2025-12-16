/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Tue Jun 18 2024 11:36:28 PM
 */
#include<bits/stdc++.h>

using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    int min=vec[0];
    int ans= 0;
     for(int i=0;i<n;i++)
    {
        ans+=(vec[i]-min);
    }
    cout<<ans<<endl;
  }
}