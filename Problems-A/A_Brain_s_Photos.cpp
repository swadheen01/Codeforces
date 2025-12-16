#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    int flag = 0;
    char s;
    for(int i=0; i<n; i++)
    {
        for(int i=0; i<m; i++)
        {
            cin>>s;
            if(s=='C' || s=='M' ||s=='Y') flag = 1;

        }
    }
    if(flag==1) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;

    return 0;
}