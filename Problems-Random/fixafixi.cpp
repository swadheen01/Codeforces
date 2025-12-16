#include <iostream>
#include <stack>
#include <algorithm> // For reverse()
using namespace std;

int main() {
    string prefix;
    //cout << "Enter a prefix expression: ";
    cin >> prefix;

    // Reverse the prefix expression
    //reverse(prefix.begin(), prefix.end());
    //for(auto &ch:prefix){if(ch=='(') ch = ')'; else ch='(';}
    stack<string> st;

    for (char ch : prefix) {
        if (isalpha(ch)) { // If it's an operand (A-Z or a-z)
            string ss = "";
            ss += ch;
            st.push(ss);
        } else { // If it's an operator
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();

            // Combine into infix form
            string s = "(" + op2 + ch + op1 + ")";
            st.push(s);
        }
    }

    // The final expression on top of the stack is in reversed infix form
    string result = st.top();


    cout << "Infix expression: "<< result << endl;
    //for(int i=0; i<result.length(); i++)
   
    return 0;
}
