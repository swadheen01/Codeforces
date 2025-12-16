/*
 * Copyright (c) Swadheen Islam Robi (SIR01)
 * Created on Sat Dec 07 2024 10:00:23 PM
 */

#include <bits/stdc++.h>
using namespace std;

// Custom Node structure
struct Node {
    char data; // To store bracket characters
    Node* next;
    Node(char d) {
        data = d;
        next = NULL;
    }
};

// Custom Stack implementation using linked list
struct Stack {
    Node* head = NULL; // Points to the top of the stack
    int cnt = 0;       // Keeps track of the size of the stack

    void push(char d); // Push a character onto the stack
    void pop();        // Remove the top element from the stack
    bool Empty();      // Check if the stack is empty
    char top();        // Get the top element of the stack
};

void Stack::push(char d) {
    Node* n = new Node(d);
    n->next = head;
    head = n;
    cnt++;
}

void Stack::pop() {
    if (Empty()) throw runtime_error("Cannot pop from an empty stack!"); //to avoid some error
    Node* h = head;
    head = head->next;
    delete h;
    cnt--;
}

bool Stack::Empty() {
    return cnt == 0;
}

char Stack::top() {
    if (Empty()) throw runtime_error("Cannot get the top of an empty stack!");   //to avoid some error
    return head->data;
}

// Function to check if a string has balanced brackets
string isBalanced(string s) {
    Stack st; // Using custom stack

    for (char brc : s) { // Traverse through the string
        if (brc == '(' || brc == '[' || brc == '{') {
            st.push(brc); // Push opening brackets onto the stack
        } else {
            if (st.Empty()) return "NO"; // No matching opening bracket

            char top = st.top(); // Get the top element
            st.pop();

            // Check if the popped opening bracket matches the closing bracket
            if ((brc == ')' && top != '(') ||
                (brc == ']' && top != '[') ||
                (brc == '}' && top != '{')) {
                return "NO";
            }
        }
    }

    return st.Empty() ? "YES" : "NO"; // Balanced if stack is empty
}
//this main function was in build
int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(t_temp);

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
