#include <bits/stdc++.h>
using namespace std;
#define null NULL

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        data = d;
        next = null;
        prev = null;
    }
};

struct dllc
{
    Node *head = null;
    void insertHead(int d);
    void insertEnd(int d);
    void insertAtPos(int loc, int d);
    void deleteHead();
    void deleteEnd();
    void deleteAtPos(int loc);
    void searchItem(int item);
    void print();
};

void dllc::insertHead(int d)
{
    Node *n = new Node(d);
    if (head == null)
    {
        head = n;
        head->next = head;
        head->prev = head;
    }
    else
    {
        Node *last = head->prev;
        n->next = head;
        head->prev = n;
        n->prev = last;
        last->next = n;
        head = n;
    }
}

void dllc::insertEnd(int d)
{
    Node *n = new Node(d);
    if (head == null)
    {
        head = n;
        head->next = head;
        head->prev = head;
    }
    else
    {
        Node *last = head->prev;
        n->next = head;
        head->prev = n;
        n->prev = last;
        last->next = n;
       
    }
}

void dllc::insertAtPos(int loc, int d)
{
    if (loc < 0)
    {
        return;
    }

    Node *n = new Node(d);
    if (loc == 0 || head == null)
    {
        insertHead(d);
        return;
    }

    Node *h = head;
    int c = 0;
    while (c < loc - 1 && h->next != head)
    {
        h = h->next;
        c++;
    }

    n->next = h->next;
    n->prev = h;
    h->next->prev = n;
    h->next = n;
}

void dllc::deleteHead()
{
    if (head == null)
    {
        cout << "List is empty\n";
    }
    else if (head->next == head)
    {
        delete head;
        head = null;
    }
    else
    {
        Node *last = head->prev;
        Node *temp = head;

        head = head->next;
        
        head->prev = last;
        last->next = head;
        delete temp;
    }
}

void dllc::deleteEnd()
{
    if (head == null)
    {
        cout << "List is empty\n";
    }
    else if (head->next == head)
    {
        delete head;
        head = null;
    }
    else
    {
        Node *last = head->prev;
        Node *newTail = last->prev;
        newTail->next = head;
        head->prev = newTail;
        delete last;
    }
}

void dllc::deleteAtPos(int loc)
{
    if (head == null)
    {
        cout << "List is empty\n";
        return;
    }
    else if (loc == 0)
    {
        deleteHead();
        return;
    }

    Node *h = head;
    int c = 0;
    while (c < loc && h->next != head)
    {
        h = h->next;
        c++;
    }

    if (h == head)
    {
        cout << "Invalid location\n";
        return;
    }

    h->prev->next = h->next;
    h->next->prev = h->prev;
    delete h;
}

void dllc::searchItem(int item)
{
    if (head == null)
    {
        cout << "List is empty\n";
        return;
    }

    Node *h = head;
    do
    {
        if (h->data == item)
        {
            cout << "Item Found\n";
            return;
        }
        h = h->next;
    } while (h != head);

    cout << "Item Not Found\n";
}

void dllc::print()
{
    if (head == null)
    {
        cout << "List is empty\n";
        return;
    }

    Node *h = head;
    do
    {
        cout << h->data << " ";
        h = h->next;
    } while (h != head);
    cout << endl;
}

int main()
{
    dllc L;
    L.insertHead(10);
    L.insertHead(20);
    L.insertHead(30);
    L.insertEnd(40);
    L.insertEnd(50);
    L.insertEnd(60);
    L.insertAtPos(2, 100);

    L.print();
    L.deleteHead();
    L.deleteEnd();
    L.deleteAtPos(2);

    L.searchItem(100);
    L.print();

    return 0;
}
