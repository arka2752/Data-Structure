// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
struct stk
{
    int data;
    stk *next;
};
stk *TOP = NULL;
stk *create_node(int item)
{
    stk *New = new stk;
    if (New == NULL)
    {
        cout << "OVERFLOW" << endl;
        exit(1);
    }
    New->data = item;
    New->next = NULL;
    return New;
}
void PUSH(int item)
{
    stk *new_node = create_node(item);
    new_node->next = TOP;
    TOP = new_node;
}
void POP()
{
    if (TOP == NULL)
    {
        cout << "UNDERFLOW" << endl;
        exit(1);
    }
    TOP = TOP->next;
}
void print()
{
    stk *ptr = TOP;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    PUSH(5);
    PUSH(7);
    PUSH(8);
    PUSH(9);
    PUSH(4);

    print();
    cout << endl;

    POP();
    print();
}