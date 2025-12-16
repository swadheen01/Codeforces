#include<bits/stdc++.h>
using namespace std;
int main(){

    long double n,m,a;
    long long ans;

    cin>>n>>m>>a;
    
    ans = ceil(n/a) * ceil(m/a);
    
    cout<<ans<<endl;


    return 0;
}
//1000000000000000000