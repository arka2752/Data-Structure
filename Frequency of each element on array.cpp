// Find Frequency of elements in the array..........

// This is Arka's Code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size = ";
    cin >> n;

    int ar[n];
    int ar2[1000];
    memset(ar2, 0, sizeof(ar2));

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        ar2[ar[i]]++;
    }
    cout << "Main array is = ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (ar2[i] > 0)
        {
            cout << i << "---->" << ar2[i] << endl;
        }
    }
}