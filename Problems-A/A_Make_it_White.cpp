#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        /*string arr[n];
        for(int i = 0; i<n; i++){
            cin>> arr[i];
        }*/
        int low = 0, high = 0;
        for(int l=0; l<n; l++){
            if(s[l]=='B'){
                low = l;
                break;
            }
        }
        for(int l=n-1; l>=0; l--){
            if(s[l]=='B'){
                high = l;
                break;
            }
        }
        cout<<(high-low+1)<<endl;
        
    }



    return 0;
}