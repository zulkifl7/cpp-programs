/* how to insert 5 number, calculate
the total and display the total */

#include <iostream>
using namespace std;

int main()
{
    int count = 1, num = 0, tot = 0;
    while (count <= 5)
    {
        cout << "Enter the number - ";
        cin >> num;

        tot = tot + num;

        count++;
    }
    cout << "Total of all 5 mnumberes is - " << tot << "\n";

    return 0;
}