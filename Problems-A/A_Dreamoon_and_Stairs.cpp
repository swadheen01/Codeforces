#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int minn = (n+1)/2;
    if(n<m){cout<<-1<<endl;}
    else if(minn%m==0)
    {
        cout<<minn<<endl;
    }
    else{
        int flag = 1;
        int ans = 0;
        for(int i = minn+1; i<=(2*minn); i++)
        {
            if(i%m==0)
            {
                ans = i;
                flag = 1;
                break;
            }
            else{
                flag = 0;
            }
        }
        if(flag)
        {cout<<ans<<endl;}
        else
        {cout<<-1<<endl;}
    }
    return 0;
}