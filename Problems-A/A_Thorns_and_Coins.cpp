#include<bits/stdc++.h>
using namespace std;

void sir()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long c = 0;
    
    int l = n;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == '*' && s[i+1]=='*'){
            l = i;
            break;
        }
    }
    for(int i = 0; i<l; i++)
    {
        if(s[i]=='@'){
            c++;
        }
            
    }
 cout<<c<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        sir();
    }
    return 0;
}
