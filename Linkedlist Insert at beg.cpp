#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *HEAD = NULL;

Node *create_node(int item)
{
    Node *new_node = new Node;
    if (new_node == NULL)
    {
        cout << "OVERFLOW" << endl;
        exit(1);
    }
    new_node->data = item;
    new_node->next = NULL;
    return new_node;
}

void insert_at_beg(Node *addnode)
{
    addnode->next = HEAD;
    HEAD = addnode;
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

    Node *first_node = create_node(5);
    insert_at_beg(first_node);
    Node *second_node = create_node(7);
    insert_at_beg(second_node);
    print();
}