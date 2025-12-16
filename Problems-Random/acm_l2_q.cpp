#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        //string result = s.substr(0,n)+s.substr(n+1); Problem while removing the last letter
        s.erase(n-1,1);
        cout<<i<<" "<<s<<endl;
        
    }



    return 0;
}