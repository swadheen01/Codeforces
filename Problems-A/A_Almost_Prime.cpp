/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jun 20 2024 11:30:54 PM
 */
#include<bits/stdc++.h>

using namespace std;

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    vector<int> pr;
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            pr.push_back(p);
        }
    }
    return pr;
}

int main() {
    int n; cin >> n;

    vector<int> pr = sieve(n);
    
    int c = 0;
    int c2 = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<pr.size(); j++)
        {
            
            if(i%pr[j]==0){
                c2++;    
            }
            if(c2>2) break;


        }
        if(c2 == 2){
            c++;
            c2 = 0;
        }
        else c2 = 0;
    }
    cout<<c<<endl;

    return 0;
}
/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Jun 22 2024 12:41:25 AM
 */
