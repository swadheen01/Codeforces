/*
 *Copyright (c) Swadheen Islam Robi (SIR01)
 *Created on Mon Dec 16 2024 1:45:24 AM
 */


SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
  
    SinglyLinkedListNode* ans = NULL;
 
  //Base cases
  if (head1 == NULL) 
     return(head2);
  else if (head2==NULL) 
     return(head1);
 
  /* Pick either hrad1 or 2, and recursion */
  if (head1->data <= head2->data) 
  {
     ans = head1;
     ans->next = mergeLists(head1->next, head2);
  }
  else
  {
     ans = head2;
     ans->next = mergeLists(head1, head2->next);
  }
  return(ans);
}



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

// Custom Node structure for stack
struct Node {
    string data;
    Node* next;
    Node(string d) {
        data = d;
        next = NULL;
    }
};

// Custom Stack using linked list
struct Stack {
    Node* head = NULL; // Points to the top of the stack
    int cnt = 0; // Keeps track of the size of the stack

    void push(string d); // Push operation
    void pop(); // Pop operation
    bool Empty(); // Check if the stack is Empty
    string top(); // Get the top element of the stack
    bool contains(string d); // Check if the stack contains a particular element
};

void Stack::push(string d) {
    Node* n = new Node(d);
    n->next = head;
    head = n;
    cnt++;
}

void Stack::pop() {
    if (Empty()) return;
    Node* temp = head;
    head = head->next;
    delete temp;
    cnt--;
}

bool Stack::Empty() {
    return cnt == 0;
}

string Stack::top() {
    if (Empty()) return "";
    return head->data;
}

bool Stack::contains(string d) {
    Node* temp = head;
    while (temp) {
        if (temp->data == d) return true;
        temp = temp->next;
    }
    return false;
}
void sir() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        cout << "Case " << i << ":\n";

        Stack back, forw;
        string crnt = "http://www.lightoj.com/";  //As per question we are here first

        string cmd;
        while (true) {
            cin >> cmd;

            if (cmd == "QUIT") {
                break;      //quit means break
            } else if (cmd == "VISIT") {        //if visit, means present page will go back and new page will be current page
                string url;
                cin >> url;
                back.push(crnt);
                crnt = url;

                while (!forw.Empty()) {
                    forw.pop();     //as per question if new page visited, all forward will be deleted
                }

                cout << crnt << "\n";   //printing the crnt page
            } else if (cmd == "BACK") {
                if (back.Empty()) {
                    cout << "Ignored\n";
                } else {
                    forw.push(crnt);    //if back is the command, crnt will be in forward and back er top will be crnt
                    crnt = back.top();  
                    back.pop();
                    cout << crnt << "\n";
                }
            } else if (cmd == "FORWARD") {  //same like back but reversly
                if (forw.Empty()) {
                    cout << "Ignored\n";
                } else {
                    back.push(crnt);
                    crnt = forw.top();
                    forw.pop();
                    cout << crnt << "\n";
                }
            }
        }
    }
}

int main() {
    ALLAHU_AKBAR

    ll t = 1;
    //cin>>t;
    while(t--)
    {
        sir();
    }
    return 0;
}

