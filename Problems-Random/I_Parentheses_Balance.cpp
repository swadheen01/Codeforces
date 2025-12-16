/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 2:29:46 AM
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pie 2*(acos(0.0))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define pb push_back
#define endl "\n"
#define lcm(a,b) (a*b)/(__gcd<ll>(a,b))
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

// Custom stack implementation
struct Stack {
    char data[128];
    int topIndex = -1;

    void push(char ch) {        //creating the function into the stack for easier purpose
        data[++topIndex] = ch;
    }

    void pop() {
        if (topIndex >= 0) topIndex--;
    }

    char top() {
        return (topIndex >= 0) ? data[topIndex] : '\0';
    }

    bool empty() {
        return topIndex == -1;
    }

    void clear() {
        topIndex = -1; // Reset the stack
    }
};

int main() {
    int count;
    cin >> count;
    cin.ignore(); // Ignore newstr after count input

    Stack stack;

    while (count--) {
        string str;
        getline(cin, str);  //taking string input of bracket sequence

        stack.clear(); // Reseting stack for the new test case
        bool isValid = true;
        // checking if the brackets are in correct order
        for (char ch : str) {
            if (ch == '(' || ch == '[') {
                stack.push(ch);
            } else if (ch == ')' || ch == ']') {
                if (stack.empty() || 
                   (ch == ')' && stack.top() != '(') || 
                   (ch == ']' && stack.top() != '[')) {
                    isValid = false; // Invalid condition
                    break;
                } else {
                    stack.pop(); // Valid match
                }
            }
        }

        // If stack is not empty or invalid conditions were encountered
        if (!isValid || !stack.empty()) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
