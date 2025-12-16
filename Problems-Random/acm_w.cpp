#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string n = s;
        reverse(n.begin(),n.end());
        if(s==n){
            cout<<"wins"<<endl;
        }else{
            cout<<"loses"<<endl;
        }
    }
    return 0;
}