#include <bits/stdc++.h>
using namespace std;
bool solve(){
        long long n;
        cin >> n;
        long long cont[n];
        long long sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> cont[i];
            sum += cont[i];
        }

        long long av = sum / n;
        long long ex = 0;
        for(int i = 0; i<n; i++){
        if(cont[i]<av)
        {
            if(cont[i]+ex < av) return false;
            else ex -= (av-cont[i]);
        }
        else 
        {
            ex += (cont[i]-av);
        }
    }
    return true;
}


int main() {
    int t;
    cin >> t;

    while (t--){
        if(solve()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }return 0;

}