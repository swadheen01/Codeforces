#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    int one = 0;
    int two = 0;
    int three = 0;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if (arr[i]==1){
            one +=1;
            a.push_back(i+1);

        }
        else if(arr[i]==2){
            two += 1;
            b.push_back(i+1);

        }
        else{
            three += 1;
            c.push_back(i+1);
            }
    }
    
    int result = min({one,two,three});
    if (result==0){
        cout<<result<<endl;
    } else{
        cout<<result<<endl;
        for(int i=0; i<result; i++){
            cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
        }
    }

    return 0;
}