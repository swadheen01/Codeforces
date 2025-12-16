/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sun Dec 08 2024 1:40:22 AM
 */
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; // Input the sequence of '+' and '-'
    
    stack<char> st; // Stack to track cross

    for (char c : s) {
        if (st.empty()) {
            st.push(c);      // If the stack is empty, push the current character
        } else if (st.top() == c) {
           st.pop();    //If the current character match the top of the stack,means cross can resolve,so pop the stack
        } else {
            st.push(c); // Otherwise, push the current character onto the stack
        }
    }

    // If the stack is empty, the sequence is balanced
    if (st.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
