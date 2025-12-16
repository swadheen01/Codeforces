//HEART       
#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < 1; i++) 
    {
        for (int j = 1; j <= 2*n; j++) {
            if(j==1 || j==n+1){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }cout<<endl;
    }
    for (int i = 0; i < 1; i++) 
    {
        for (int j = 1; j <= 2*n+1; j++) {
            if(j==1 || j==n+1 || j==2*n+1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    //without 1st 2nd and last line
    for(int i=0; i<n-2; i++)
    {
        for(int j=1; j<=2*n-i; j++)

        if(j==i+2 || j== 2*n-i)
        {
            cout<<"*";
        }else{
            cout<<" ";
        }cout<<endl;
    }


    //last line
    for (int i = 0; i < 1; i++) 
    {
        for (int j = 1; j <= n+1; j++) {
            if(j==n+1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }




    return 0;
}
