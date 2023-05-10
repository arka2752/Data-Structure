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
}
void insert_at_end(Node *addnode)
{
    if (HEAD == NULL)
    {
        HEAD = addnode;
    }
    else
    {
        Node *ptr = HEAD;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = addnode;
    }
}

void insert_at_beg(Node *addnode)
{
    addnode->next = HEAD;
    HEAD = addnode;
}

void remove_from_end()
{
    Node *ptr = HEAD;
    Node *save;
    while (ptr->next != NULL)
    {
        save = ptr;
        ptr = ptr->next;
        // cout << save->data << endl;
    }
    // cout << "----" << endl;
    // cout << save->data << endl;
    // cout << ptr->data << endl;
    save->next = ptr->next;
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
    insert_at_end(first_node);
    Node *second_node = create_node(8);
    insert_at_end(second_node);
    Node *third_node = create_node(7);
    insert_at_end(third_node);

    print();
    cout << endl;
    remove_from_end();
    cout << "After remove = ";
    print();
}