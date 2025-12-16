here is the code for infix to postfix:
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

bool isOperator(char ch) {
    return ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^';
}

int precedence(char ch) {
    if(ch=='+' || ch=='-') {
        return 1;
    }
    else if(ch=='*' || ch=='/') {
        return 2;
    }
    else if(ch=='^') {
        return 3;
    }
    else if(ch==')' || ch=='}' || ch==']') {
        return 4;
    }else{
        return -1;
    }
}

int main(){
    stack<char> st;
    string exp, postfixResult="";
    cin >> exp;

    // Step 1
    for(int i=0; i<exp.size(); i++){
        // Step 2
        if(exp[i] >= 'A' && exp[i] <= 'Z'){
            postfixResult += exp[i];
        // Step 3
        }else if(isOperator(exp[i])){
            // Step 4
            if(st.empty() || st.top()=='(' ||
            precedence(exp[i]) > precedence(st.top())){
                st.push(exp[i]);
            }
            // Step 5
            else{
                while(!st.empty() && precedence(exp[i]) <= precedence(st.top())){
                    postfixResult += st.top();
                    st.pop();
                }
                st.push(exp[i]);
            }
        }
        // Step 6
        else if(exp[i] == '('){
            st.push(exp[i]);
        }
        else if(exp[i] == ')'){
            while(st.top() != '('){
                postfixResult += st.top();
                st.pop();
            }
            st.pop();
        }
    }

    // Step 7
    while(!st.empty()) {
        postfixResult += st.top();
        st.pop();
    }

    cout << postfixResult << endl;


    return 0;
}

// Testcase: ((A+B)-C*(D/E))+F

Here is the code for postfix to infix:
//========== Postix to Infix Expression ==========//
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> st;
    string exp;
    cin >> exp;

    for (int i=0; i<exp.size(); i++) {
        if (exp[i] >= 'A' && exp[i] <= 'Z') {
            string ss = "";
            ss += exp[i];
            st.push(ss);
        } else {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();

            string s = "(" + s2 + exp[i] + s1 + ")";
            st.push(s);
        }
    }

    cout << st.top() << endl;

    return 0;
}

// Testcase: AB+CDE/*-F+


//============= Postfix Evaluation =============//
#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int main(){
    stack<int> st;
    string exp;
    cin >> exp;

    for(int i=0; i<exp.size(); i++){
        if(exp[i] >= '0' && exp[i] <= '9'){
            st.push(exp[i] - '0');
        }
        else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            if(exp[i] == '+'){
                st.push(b+a);
            }
            else if(exp[i] == '-'){
                st.push(b-a);
            }
            else if(exp[i] == '*'){
                st.push(b*a);
            }
            else if(exp[i] == '/'){
                st.push(b/a);
            }
            else if(exp[i] == '^'){
                st.push(pow(b, a));
            }
        }
    }

  cout << st.top();
  
  return 0;
}

// Testcase: 12+345/*-6+
