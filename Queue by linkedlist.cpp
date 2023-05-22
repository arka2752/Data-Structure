// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    int data;
    Queue *next;
};
Queue *front = NULL;
Queue *rare = NULL;
Queue *create_node(int item)
{
    Queue *n1 = new Queue;
    if (n1 == NULL)
    {
        cout << "OVERFLOW" << endl;
        exit(1);
    }
    else
    {
        n1->data = item;
        n1->next = NULL;
        return n1;
    }
}
void push(int item)
{
    Queue *new_node = create_node(item);
    if (front == NULL)
    {
        front = new_node;
        rare = new_node;
    }
    else
    {
        rare->next = new_node;
        rare = new_node;
    }
}
void pop()
{
    if (front == NULL)
    {
        cout << "UNDERFLOW" << endl;
        exit(1);
    }
    else
    {
        front = front->next;
    }
}
void print()
{
    if (front == NULL)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    Queue *ptr = front;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);

    print();
    cout << endl;

    pop();
    pop();
    pop();
    print();
    cout << endl;

    pop();
    pop();
    print();
    cout << endl;

       push(5);
    push(5);
    push(5);
    print();
    cout << endl;
}