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
        int n = s.length();
        int count_0 = 0;
        int count_1 = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                count_0++;
            }
            else{
                count_1++;
            }
        }
        if((min(count_0, count_1)%2 != 0) && count_0 !=0 && count_1 != 0)
        {
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
}