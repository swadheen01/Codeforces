#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int hund=0, fift=0, ten=0, fi=0, two=0;
        cin>>n;
        hund += n/100;
        n %=100;
        fift += n/50;
        n %= 50;
        ten += n/10;
        n %=10;
        fi += n/5;
        n %= 5;
        two += n/2;
        n %= 2;
        cout<< hund + fift + ten + fi + two + n << endl;

    }
    return 0;
}