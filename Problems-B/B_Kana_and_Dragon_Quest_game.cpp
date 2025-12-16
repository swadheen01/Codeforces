//try diff approach
//Solved by Swadheen Islam Robi
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        while(n>0 || m>0){
            if (x-m*10<=0){
                x=x-m*10;
                break;
            }
            if (n>0){
                x=x/2+10;
                n--;
            }
            else if (m>0){
                x-=10;
                m--;
            }
            if (x<=0) break;
        }
        if (x<=0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}