#include <bits/stdc++.h>
using namespace std;
int FRONT = 0, REAR = 0, MAXQ = 5;
char Queue[6];
void PUSH(char ch)
{
    if ((FRONT == 1 && REAR == MAXQ) || FRONT == REAR + 1)
    {
        cout << "OVERFLOW" << endl;
        exit(1);
    }
    if (FRONT == 0)
    {
        FRONT++;
        REAR++;
    }
    else if (REAR == MAXQ)
    {
        REAR = 1;
    }
    else
        REAR++;
    Queue[REAR] = ch;
    return;
}
void POP()
{
    if (FRONT == 0)
    {
        cout << "UNDERFLOW" << endl;
        exit(1);
    }
    char ch = Queue[FRONT];
    if (FRONT == REAR)
    {
        FRONT = 0;
        REAR = 0;
    }
    else if (FRONT == MAXQ)
    {
        FRONT = 1;
    }
    else
        FRONT++;
}
void printqueue()
{
    cout << "FRONT = " << FRONT << "REAR = " << REAR << endl;
    if (FRONT == 0 && REAR == 0)
    {
        cout << "QUEUE IS EMPTY" << endl;
        return;
    }
    for (int i = FRONT;;)
    {
        if (i == REAR)
        {
            cout << Queue[i] << " ";
            break;
        }
        else if (i == MAXQ)
        {
            cout << Queue[i] << " ";
            i = 1;
        }
        else
        {
            cout << Queue[i] << " ";
            i++;
        }
    }
}

int main()
{
    printqueue();
    PUSH('A');
    PUSH('B');
    PUSH('C');
    printqueue();
    POP();
    printqueue();
    PUSH('D');
    PUSH('E');
    printqueue();
    POP();
    POP();
}