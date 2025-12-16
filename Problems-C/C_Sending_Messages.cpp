#include<bits/stdc++.h>
using namespace std;

void sir(){
    long long n, f, a, b;
    cin>>n>>f>>a>>b;
    vector<long long>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    long long mn, p;
    p = 0;
    for(int i=0;i<n;i++){
        mn = min(b,abs(v[i]-p)*a);
        f = f - mn;
        p = v[i];
    }
    if(f>=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        sir();
    }

    return 0;
}
