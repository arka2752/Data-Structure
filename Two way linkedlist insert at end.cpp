#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *HEAD = NULL;
Node *TAIL = NULL;

Node *create_node(int item)
{
    Node *new_node = new Node;
    if (new_node == NULL)
    {
        cout << "OVERFLOW"
             << " ";
        exit(1);
    }
    new_node->data = item;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}
void insert_at_end(int item)
{
    Node *new_node = create_node(item);
    if (HEAD == NULL)
    {
        HEAD = new_node;
    }
    else
    {
        Node *ptr = HEAD;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;

        new_node->prev = ptr;
    }
}

void print()
{
    Node *ptr = HEAD;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    int n;
    cout << "Enter how many elements = ";
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        insert_at_end(a);
    }
    print();
}