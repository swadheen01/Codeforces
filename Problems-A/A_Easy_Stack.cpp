/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Sat Dec 07 2024 09:30:35 PM
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ALLAHU_AKBAR ios::sync_with_stdio(false); cin.tie(nullptr);

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


int main() {
    ALLAHU_AKBAR // jus Faster input-output

    Stack st; // Declaring the stack
    ll t;
    cin >> t; // Number of queries

    vector<string> ans; // To store output for type 3 queries

    while (t--) {
        ll x;
        cin >> x; // Query type
        if (x == 1) { // if type is 1, Push operation
            ll n;
            cin >> n;
            st.push(n);
        } else if (x == 2) { // as type is 2 Pop operation
            if (!st.Empty()) st.pop();

        } else { // Print top
            if (st.Empty()) {
                ans.push_back("Empty!");    //storing the string to the vector to print the result
            } else {
                ans.push_back(to_string(st.top())); //to string function to make the number a string and storing it into the ans vector
            }
        }
    }

    // Print all answer at once
    for (const string &res: ans) {
        cout << res << '\n';    //using \n for faster code
    }

    return 0;
}
