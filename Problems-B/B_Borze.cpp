#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    string result;

    for(int i = 0; i<n; i++){
        if (s[i]=='-' && s[i+1]=='.'){
            result += '1';
            i ++;
        }else if(s[i]=='-' && s[i+1]=='-'){
            result += '2';
            i++;
        }else{
            result += '0';
        }
    }
    cout<<result<<endl;


return 0;
}