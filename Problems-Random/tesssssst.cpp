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
    Node *head = NULL;
    int cnt = 0;

    void push(int d);
    int pop();
    int Size();
    bool Empty();
    int top();
    void print();
};

void Stack::push(int d)
{
    Node *n = new Node(d);
    if(cnt<mx)
    {
        if(head==NULL)
        {
            head = n;
        }
        else{
            n->next = head;
            head = n;
        }
        cnt++;
    }
    else{
        cout<<"Full"<<endl;
    }
}
int Stack::Size()
{
    return cnt;
}
int Stack::pop()
{
    if(cnt==0)
    {
        cout<<"Empty\n";
        return -1;
    }
    else{
        Node *h = head;
        head = head->next;
        int del = h->data;
        delete h;
        cnt--;
        return del;
    }
}
bool Stack::Empty()
{
    return cnt==0;
}
int Stack::top()
{
    if(head==NULL)
    {
        cout<<"Empty\n";
        return -1;
    }
    return head->data;
}

void Stack::print()
{
    Node *h = head;
    while(h!=NULL)
    {
        cout<<h->data<<endl;
        h = h->next;
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
    st.push(50);

    st.print();

    cout<<"TOP is "<<st.top()<<endl;

    cout<<"Deleted "<<st.pop()<<endl;
    cout<<"TOP is "<<st.top()<<endl;
    cout<<"Size "<<st.Size()<<endl;

    cout<<st.Empty()<<endl;
}