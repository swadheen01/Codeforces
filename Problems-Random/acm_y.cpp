#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[1000][1000];

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin>>arr[i][j];
        }
    }
    //just for copying last line
    int ans[1000][1000];

    for (int j = 0; j < n; j++)
    {
        ans[n - 1][j] = arr[n - 1][j];
    }

    //2nd last theke upore jug korchi
    for(int i = n-2; i>=0; i--){
        for(int j= 0; j<=i; j++){
            ans[i][j] = arr[i][j] + max(ans[i+1][j], ans[i+1][j+1]);
        }
    }
    cout<< ans[0][0]<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return  0;
}
