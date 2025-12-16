/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 07 2024 10:00:23 PM
 */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

struct Node{        // Making a stack by creating Linked list
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct Stack        //creating a stack
{
    Node *head = NULL;
    int cnt = 0;

    void push(int d);   //all the functions of stack
    void pop();
    int Size();
    bool Empty();
    int top();
};

int Stack:: Size()
{
    return cnt;
}

void Stack:: push(int d)
{
    Node *n = new Node(d);

    if(head == NULL)
    {
        head = n;
    }
    else{
        n->next = head;
        head = n;
    }
    cnt++;
}
void Stack:: pop()
{

    Node *h = head;
    head = head->next;
    int deletedData = h->data;

    delete h;
    cnt--;

}

bool Stack::Empty()
{
    if(Size()==0) return true;
    return false;
}
int Stack:: top()
{
    if(!Empty()) return head->data;
}

string isBalanced(string s) {
    Stack st;   //declaring the stack

    for (char brc : s) {        //traversing through the string for the brackets
        if (brc == '(' || brc == '[' || brc == '{') {
            // If the character is an opening bracket, pushing it onto the stack
            st.push(brc);
        } else {
            // If the character is a closing bracket, check for closing brackets
            if (st.Empty()) return "NO"; // No matching opening bracket
            char top = st.top();    //storing the top
            st.pop();

            // Check if the popped opening bracket matches the closing bracket
            if ((brc == ')' && top != '(') ||
                (brc == ']' && top != '[') ||
                (brc == '}' && top != '{')) {
                return "NO";        //if the condition true, means there is a wrong, no balance
            }
        }
    }

    // If the stack is empty, the brackets are balanced
    if(st.Empty()) return "YES";
    else return "NO";
}

int main()
{
    int n; cin>>n;
    while(n--)
    {
        string s; cin>>s;
        string result = isBalanced(s);

        cout << result << "\n";
    }

    return 0;
}

