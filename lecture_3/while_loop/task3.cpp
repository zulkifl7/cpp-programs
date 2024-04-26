/*
develop a cpp program to insert 10 nummbers and display only even numbers
*/

#include <iostream>
using namespace std;

int main()
{
    int count = 0, num = 0;

    while (count <= 10)
    {
        cout << "Enter the number - ";
        cin >> num;

        if ((num % 2) == 0)
        {
            cout << num << "\n";
        }
        count++;
    }

    return 0;
}