#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    string s;
    cin>>s;
    string t = "qwertyuiopasdfghjkl;zxcvbnm,./";
    //string result;

    if(c=='R')
    {
        for (char k : s)
        {
            for(int i=0; i<30;i++)
            {
                if(k==t[i])
                {
                    //result += t[i-1];
                    cout<<t[i-1];
                }
            }
        }

    }
    else
    {
        for (char k : s)
        {
            for(int i=0; i<30;i++)
            {
                if(k==t[i])
                {
                    //result += t[i+1];
                    cout<<t[i+1];
                }
            }
        }
    }
    //cout<<result<<endl;

    return 0;
 
}