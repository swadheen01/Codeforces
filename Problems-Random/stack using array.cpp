/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 10:46:13 PM
 */
#include<bits/stdc++.h>
using namespace std;
const int mx = 5;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct Stack{
    int arr[mx];

    int topind = -1;

    void push(int d);
    int pop();
    int Size();
    bool Empty();
    int top();
    void print();
};

void Stack::push(int d)
{
    if(Size()<mx)
    {
        arr[++topind] = d;

    }
    else{
        cout<<"Full"<<endl;
    }
}
int Stack::Size()
{
    return topind+1;
}
int Stack::pop()
{
    if(Empty())
    {
        cout<<"Empty\n";
        return -1;
    }
    else{
        return arr[topind--];
    }
}
bool Stack::Empty()
{
    return topind==-1;
}
int Stack::top()
{
    if(Empty()){
        cout<<"Empty"<<endl;
        return -1;
    }
    return arr[topind];
}

void Stack::print()
{
    if(Size()==0) cout<<"Empty\n";
    else{
        int ind = topind;
        while(ind>=0)
        {
            cout<<arr[ind]<<endl;
            ind--;
        }
    }
}
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // Overflow test
    st.print();
    cout << "TOP is " << st.top() << endl;

    cout << "Deleted " << st.pop() << endl;
    cout << "TOP is " << st.top() << endl;
    cout << "Size " << st.Size() << endl;
    st.print();
    cout << st.Empty() << endl; // Should return 0 (false)

    // Pop all elements
    while (!st.Empty()) {
        cout << "Deleted " << st.pop() << endl;
    }

    cout << "TOP after clearing: " << st.top() << endl; // Should indicate empty
    cout << "Stack empty: " << st.Empty() << endl; // Should return 1 (true)

}