#include <bits/stdc++.h>

using namespace std;

long long max_matches(long long N) {
    if (N == 1) {
        return 0;
    } else {
        long long match = (N * (N - 1)) / 2;
        
        N = ceil(N/2);
        
        while(N!=2){
            match += (N * (N - 1)) / 2;
            N = ceil(N/2);
        }
        long long total_matches = match + 1  ;

        return total_matches;
    }
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        long long N;
        cin >> N;

        long long result = max_matches(N);
        cout << result << endl;
    }

    return 0;
}
