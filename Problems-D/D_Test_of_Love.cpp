/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Thu Jul 11 2024 10:01:54 PM
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int riverLength, maxJump, maxSwim;
        cin >> riverLength >> maxJump >> maxSwim;
        string river;
        cin >> river;
        
        int currentPosition = maxJump - 1; // Initial jump from the shore
        int waterSegments = 0;
        int failureCount = 0;
        
        for (int i = 0; i < river.size(); i++) {
            char segment = river[i];
            
            if (segment == 'L') {
                currentPosition = maxJump;
            } else if (segment == 'W') {
                if (currentPosition <= 0) waterSegments++;
            } else { // segment == 'C'
                if (currentPosition <= 0) failureCount++;
            }
            currentPosition--;
        }
        
        if (waterSegments > maxSwim) failureCount++;
        
        if (failureCount == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
