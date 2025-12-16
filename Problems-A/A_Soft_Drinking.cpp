#include<bits/stdc++.h>
using namespace std;
int main(){

    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int a;
    int b;
    int s;
    a = (k*l)/nl ;
    b = c * d ;
    s = p/np;

    int m = min({a,b,s});
    cout<<m/n<<endl;


    return 0;
}