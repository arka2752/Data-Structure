// This is Arka's code....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size = ";
    cin >> n;
    int ar[n];
    int ar2[n + 1];
    cout << "Enter arrays element = ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "Main array is = ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    int value, pos;
    cout << "Enter value = ";
    cin >> value;
    cout << "Enter position = ";
    cin >> pos;
    for (int i = n - 1; i >= pos - 1; i--)
    {
        ar2[i + 1] = ar[i];
    }
    ar2[pos - 1] = value;
    for (int i = 0; i < pos - 1; i++)
    {
        ar2[i] = ar[i];
    }
    cout << endl;
    cout << "After inserting element = ";
    for (int i = 0; i < n + 1; i++)
    {
        cout << ar2[i] << " ";
    }
}
