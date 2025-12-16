#include<bits/stdc++.h>
using namespace std;
int main(){
    //int row,col;
   // cin>>row>>col;
    //ractangle or any filled shape
    /*for(int i=1; i<=row;  i++){

        for (int j = 1; j<=col; j++){
            cout<<"*";
        }cout << endl;
    }
    // Hollow pattern
    for (int i=1; i<=row; i++){
        for (int j=1; j<=col; j++){
            if(i==1 ||i == row){
                cout<<"*";
            }else if(j==col || j == 1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }*/
     int n;
    cin>>n;
    for(int i=1; i<= n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";
            }cout<<endl;
            }
    
    /*int n;
    cin>>n;
    
    for(int i=1;i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }*/




    return 0;
}