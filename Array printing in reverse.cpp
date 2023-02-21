// This is Arka's code....
#include <iostream>
using namespace std;
void reverse_array(int n, int array[]); // prototype of function of reverse array printing
int main()                              // main function
{
    int n;                                                               // size of array or how many elements user want to store on the array
    cout << "Enter how many elements you want to store in the array = "; // giving message to enter how many elements user wants
    cin >> n;                                                            // taking input the size of the array

    int array[n];               // Declaring Array
    for (int i = 0; i < n; i++) // Traversing for taking input of elements of array
    {
        cin >> array[i]; // taking input ith elements
    }
    cout << "Before reversed = ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    reverse_array(n, array); // calling function to print reversed array
}
void reverse_array(int n, int array[]) // declaring function
{
    cout << "Reversed elements are = "; // showing message
    for (int i = n - 1; i >= 0; i--)    // traversing reverse way for show output of elements which are stored in array
    {
        cout << array[i] << " "; // printing ith elements
    }
    return;
}