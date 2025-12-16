/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Fri Jun 14 2024 9:26:12 PM
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char arr[1001][1001];
int row[1001] , col[1001];
int total;

int main() {

    int n, m;
    cin>>n>>m;
    

    for(int i=0; i<n; i++) cin>>arr[i];


    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {

            if(arr[i][j] == '*') {
                row[i]++;
                col[j]++;
                total++;
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {

            if(arr[i][j] == '*' && (row[i]+col[j] -1) == total) {

                cout<<"YES"<<endl;
                cout<<i+1<<' '<<j+1;
                return 0;
            }
            else if(arr[i][j] == '.' && (row[i]+col[j]) == total) {
                cout<<"YES"<<endl;
                cout<<i+1<<' '<<j+1;
                return 0;
            }

        }
    }

    if(total == 0){
        cout<<"YES"<<endl;
        cout<<1<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}