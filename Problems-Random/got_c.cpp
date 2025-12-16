/*
 *Copyright (c) LU_Avengers
 *Created on Fri Jun 14 2024 8:30:04 PM
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char opt[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> opt[i][j];
        }
    }
    int marks[m];
    for(int i=0;i<m;i++){
        cin>>marks[i];
    }
    int mx=0;
    
    for (int j = 0; j < m; j++) { 
        int time[5]={0};
        for (int i = 0; i < n; i++) {
            if (opt[i][j] == 'A'){
                time[0]++;
            }
            else if (opt[i][j] == 'B') {
                time[1]++;
            }
            else if (opt[i][j] == 'C') {
                time[2]++;
            }
            else if (opt[i][j] == 'D'){ 
                time[3]++;
            }
            else  {
                time[4]++;
            }

        }
        
        int mt = 0;
        for (int i = 0; i < 5; i++) {
            if (time[i] > mt) {
                mt = time[i];
            }
        }
        
        mx += mt * marks[j];
    }
    cout << mx<< endl;


}