#include <bits/stdc++.h>
using namespace std;
int first = 0, last = 0, maxq = 10; //here i used first and last instead of front and rear
void push(int Queue[], int item)
{
    if ((first == 1 && last == maxq) || first == last + 1)
    {
        cout << "OVERFLOW" << endl;
        exit(1);
    }
    if (first == 0)
    {
        first++;
        last++;
    }
    else if (last == maxq)
    {
        last = 1;
    }
    else
    {
        last++;
    }
    Queue[last] = item;
}

void print(int Queue[])
{
    cout << "Front = " << first << " Rear = " << last << endl;
    if (first == 0 && last == 0)
    {
        cout << "Empty" << endl;
        return;
    }
    else
    {
        for (int i = first;;)
        {
            if (i == last)
            {
                cout << Queue[i] << " ";
                break;
            }
            else if (i == maxq)
            {
                cout << Queue[i] << " ";
                i = 0;
            }
            else
            {
                cout << Queue[i] << " ";
                i++;
            }
        }
    }
}
void pop()
{
    if (first == 0)
    {
        cout << "UNDERFLOW" << endl;
        exit(1);
    }
    else
    {
        if (first == last)
        {
            first = 0;
            last = 0;
        }
        else if (first == maxq)
        {
            first = 1;
        }
        else
        {
            first++;
        }
    }
}

int main()
{
    int Queue[maxq + 1];
    print(Queue);
    push(Queue, 5);
    print(Queue);
    cout << endl;
    push(Queue, 7);
    push(Queue, 9);
    print(Queue);
    cout << endl;
    pop();
    print(Queue);
    cout << endl;
    pop();
    print(Queue);
    cout << endl;
    pop();
    print(Queue);
    cout << endl;
    push(Queue, 9);
    print(Queue);
    cout << endl;

}