#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag = 1;
        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i] != s[i+1]) {
                swap(s[i], s[i+1]);
                flag = 0;
                break;
            }
        }
        if(flag == 1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }

    }
    return 0;
}