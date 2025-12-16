/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 10:46:13 PM
 */
#include<bits/stdc++.h>
using namespace std;
const int mx = 5;
// struct Node
// {
//     int data;
//     Node *next;
//     Node(int d)
//     {
//         data = d;
//         next = NULL;
//     }
// };
struct Queue{
    int arr[mx];
    int front = 0;
    int rear = -1;
    int cnt = 0;

    void push(int d);
    int pop();
    int Size();
    bool Empty();
    int Front();
    int Rear();
};
int Queue::Size()
{
    return cnt;
}
bool Queue::Empty()
{
    return cnt==0;
}
void Queue::push(int d)
{
    if(cnt<mx)
    {
        rear = (rear+1)%mx;
        arr[rear] = d;
        cnt++;
    }
    else{
        cout<<"Full\n";
    }
}
int Queue::pop()
{
    if(Size()==0)
    {
        cout<<"Empty\n";
        return -1;
    }
    else
    {
        int del = arr[front];
        front = (front +1 )%mx;
        cnt--;
        return del;
        
    }
}
int Queue::Front()
{
    if(cnt==0){
        cout<<"Emt\n";
        return -1;
    }
    return arr[front];
}
int Queue::Rear()
{
    if(cnt==0){
        cout<<"Emt\n";
        return -1;
    }
    return arr[rear];
}
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout<<"Size is "<<q.Size()<<endl;
    cout<<"Front is "<<q.Front()<<endl;

    q.pop();
    cout<<"Front is "<<q.Front()<<endl;
    cout<<"Rear is "<<q.Rear()<<endl;
    cout<<"Size "<<q.Size()<<endl;

    cout<<q.Empty()<<endl;

    while(!q.Empty()) //while(!q.Empty()) is also same
    {
        cout<<q.Front()<<" ";
        q.pop();
    }
    cout<<endl;
    
    cout<<q.Empty()<<endl;
}
