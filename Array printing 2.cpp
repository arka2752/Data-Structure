// This is Arka's code.....
#include <iostream>
using namespace std;
void array_printing(int n, int array[]); // prototype of function of array printing
int main()                               // main function
{
    int n;                                                               // size of array or how many elements user want to store on the array
    cout << "Enter how many elements you want to store in the array = "; // giving message to enter how many elements user wants
    cin >> n;                                                            // taking input the size of the array

    int array[n];               // Declaring Array
    for (int i = 0; i < n; i++) // Traversing for taking input of elements of array
    {
        cin >> array[i]; // taking input ith elements
    }

    array_printing(n, array); // calling function to print the array
}
void array_printing(int n, int array[]) // declaring function
{
    cout << "Printed elements are = "; // showing message
    for (int i = 0; i < n; i++)        // traversing for show output of elements which are stored in array
    {
        cout << array[i] << " "; // printing ith elements
    }
    return;
}