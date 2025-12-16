#include<bits/stdc++.h>
using namespace std;

void sir()
{
    long long a,b,m;
    cin>>a>>b>>m;
    long long count = 0;
    
    count += (m)/a;
    count += (m)/b;

    cout<<count+2<<endl;


}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        
        sir();
    }
    
    return 0;
}
