#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *BACK;
    Node *FORW;
};
Node *FIRST = NULL;
Node *LAST = NULL;
Node *create_node(int item)
{
    Node *new_node = new Node;
    if (new_node == NULL)
    {
        cout << "OVERFLOW" << endl;
        exit(1);
    }
    new_node->data = item;
    new_node->BACK = NULL;
    new_node->FORW = NULL;

    return new_node;
}

void insert_at_beg(Node *addnode)
{
    if (FIRST == NULL && LAST == NULL)
    {
        FIRST = addnode;
        LAST = addnode;
    }
    else
    {
        addnode->FORW = FIRST;
        FIRST->BACK = addnode;
        FIRST = addnode;
    }
}

void print()
{
    Node *ptr = FIRST;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->FORW;
    }
}

void reverse_print()
{
    Node *ptr = LAST;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->BACK;
    }
}
int main()
{
    int n, item;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> item;
        Node *new_node = create_node(item);
        insert_at_beg(new_node);
    }

    print();
    cout << "\n";
    reverse_print();
}