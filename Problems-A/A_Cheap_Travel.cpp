#include<bits/stdc++.h>
using namespace std;

void sir()
{
    int n,m,a,b,result,a2;
    cin>>n>>m>>a>>b;
    a2 = ceil(float(b/m));
    if(a2<a){
        if(n%m==0){
            result = (n/m)*b;
        }
        else{
            int x = (n%m)*a + (n/m)*b;
            int y = ((n/m)+1)*b;
            if(x>y){
                result = y;
            }else{
                result = x;
            }
        }
    }
    else{
        result = n*a;
    }
    cout<<result<<endl;
}


int main()
{
    sir();

    return 0;
}