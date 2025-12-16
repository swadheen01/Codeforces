#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x,y; cin>>x>>y;
        int total = x + 4 * y;
        int yn = (y+1)/2;
        if(yn>0){

        int baki = (yn*15) - (y*4);
        if(baki>x) cout<<yn<<endl;
        else cout<< yn + (x-baki+14)/15 <<endl;
        }
        else{
            cout<<(x+14)/15<<endl;
        }
        
    }
    return 0;
}