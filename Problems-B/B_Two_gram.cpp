#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    char sec;
    char first;
    for(int i = 0;i < (n-1);i++)
    {
        char one = s[i];
        char two = s[i+1];
        int count2 = 0;
        for(int j = 0;j < n;j++)
        {
            if(s[j] == one && s[j+1] == two)
            {
                count2++;
            }
        }
        if(count2 > count)
        {
            count = count2;
            first = s[i];
            sec = s[i+1];
        }
    }
    cout<<first<<sec;
    return 0;
}
