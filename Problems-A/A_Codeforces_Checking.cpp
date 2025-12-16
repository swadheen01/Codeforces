#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        string s = "codeforces";
        int flag = 0;
        for(int i = 0; i<10; i++)
        {
            if(s[i]==c)
            {
                flag = 1;
                break;
            }
            
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}