// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int TOP = 0, MAXSTK;
void PUSH(int stk[], int item)
{
    if (TOP == MAXSTK)
    {
        cout << "OVERFLOW" << endl;
        exit(1);
    }
    TOP++;
    // cout << TOP << endl;
    stk[TOP] = item;
}
void POP(int stk[])
{
    if (TOP == 0)
    {
        cout << "UNDERFLOW" << endl;
        exit(1);
    }
    int data = stk[TOP];
    TOP--;
    cout << endl;
    cout << "Popped item = " << data << "\n\n";
}
void print(int stk[])
{
    for (int i = TOP; i > 0; i--)
    {
        cout << stk[i] << endl;
    }
}
int main()
{
    cout << "Enter max size of stack = ";
    cin >> MAXSTK;
    int stk[MAXSTK];
    PUSH(stk, 20);
    PUSH(stk, 50);
    PUSH(stk, 40);
    PUSH(stk, 60);

    cout << "Before popped...... " << endl;
    print(stk);
    cout << endl;
    POP(stk);
    POP(stk);
    cout << "After popped...... " << endl;
    print(stk);
}
// first initialize top and maxstk globally
// input max size
// Top =0 means empty stack and top means position