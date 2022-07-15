#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert_At_Head(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insert_At_Tail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n; // add the node at last
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;

        temp = temp->next;
    }
    return false;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void delete_At_Head(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        delete_At_Head(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
int main()
{
    node *head = NULL;
    insert_At_Tail(head, 1);
    insert_At_Tail(head, 2);
    insert_At_Tail(head, 3);
    insert_At_Tail(head, 4);

    display(head);
    // insert_At_Head(head, 10);
    // display(head);

    // cout << search(head, 10) << endl;
    delete_At_Head(head);
    display(head);
}