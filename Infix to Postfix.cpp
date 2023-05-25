// This is Arka's code.....

/*


input  : A+(B*C-(D/E^F)*G)*H
output : ABC*DEF^/G*-H*+




*/
#include <bits/stdc++.h>
using namespace std;
int TOP = 0, MAXSTK;
void PUSH(char stk[], char ch)
{
    if (TOP == MAXSTK)
    {
        cout << "OVERFLOW" << endl;
        exit(1);
    }
    TOP++;
    stk[TOP] = ch;
}
int POP(char stk[])
{
    if (TOP == 0)
    {
        cout << "UNDERFLOW" << endl;
        exit(1);
    }
    char op = stk[TOP];
    TOP--;
    return op;
}
void check(char stk[], char ch)
{
    if ((stk[TOP] == '^' || stk[TOP] == '*' || stk[TOP] == '/') && (ch == '+' || ch == '-'))
    {
        char op = POP(stk);
        cout << op << " ";
        PUSH(stk, ch);
    }
    else if ((stk[TOP] == '^') && (ch == '*' || ch == '/'))
    {
        char op = POP(stk);
        cout << op << " ";
        PUSH(stk, ch);
    }
    else
    {
        PUSH(stk, ch);
    }
}
int main()
{
    string str;
    getline(cin, str);
    str = "(" + str + ")";
    MAXSTK = str.size();
    char stk[MAXSTK];

    for (int i = 0; i < MAXSTK; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            cout << str[i] << " "; // Expression
        }
        else if (str[i] == '(')
        {
            PUSH(stk, '(');
        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^')
        {
            check(stk, str[i]);
        }
        else if (str[i] == ')')
        {
            while (stk[TOP] != '(')
            {
                char op = POP(stk);
                cout << op << " ";
            }
            char op = POP(stk);
        }
    }
}