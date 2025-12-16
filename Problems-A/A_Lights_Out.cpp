#include<bits/stdc++.h>

using namespace std;
#define ll	long long

set<ll>cube;
const ll N=1e12;
int arr[5][5];
void solve(){

}
int main(){
    

    for(int i=1;i<=3;++i){
            for(int j=1;j<=3;++j)
                cin>>arr[i][j];
    }
    for(int i=1;i<=3;++i){
            for(int j=1;j<=3;++j)
                cout<<(arr[i][j+1]+arr[i][j-1]+arr[i-1][j]+arr[i+1][j]+arr[i][j]+1)%2;
            cout<<endl;
    }

}
