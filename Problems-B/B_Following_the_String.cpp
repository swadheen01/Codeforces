#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    string ans="a";
 
    int b[26]={0};
    b[0]=1;
    int ind=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]==0) 
        {
            ans.push_back('a'+ind);
            b[ind]++;
            ++ind;
            continue;
        }
        for(int j=0;j<26;j++)
        {
            if(b[j]==a[i])
            {
                ans.push_back('a'+j);
                b[j]++;
                break;
            }
        }
    }
 
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}