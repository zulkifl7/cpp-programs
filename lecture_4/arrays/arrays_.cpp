/*
Array
------
* Fixed size
* Collection of elements
* Same data type


? If we want to create an
    - Integer array ==> of size 5

Position ==>  1   2   3   4   5
            |   |   |   |   |   |
Index    ==>  0   1   2   3   4

*/

// ? Exampple 1

#include <iostream>
using namespace std;

int main()
{
    //* Declaration of Array

    int arr[5], total = 0;

    //* Initialization of array
    arr[0] = 15;
    arr[1] = 25;
    arr[2] = 47;
    arr[3] = 23;
    arr[4] = 78;

    //* Displaying the array values
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    //* Getting the total
    for (int k = 0; k < 5; k++)
    {
        total = total + arr[k];
    }

    cout << "\nTotal of the values in the array is - " << total << endl;

    return 0;
}