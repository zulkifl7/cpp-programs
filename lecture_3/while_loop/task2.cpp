/*
develop a cpp program to input 10 numbers and display the total and average
*/

#include <iostream>
using namespace std;

int main()

{
    int count = 1;
    float inp = 0, tot = 0, avg = 0;

    while (count <= 10)
    {
        cout << "Enter the number " << count << " - ";
        cin >> inp;

        tot = tot + inp;

        count++;
    }
    avg = tot / 10;

    cout << "Total is : " << tot << "\nAverage is : " << avg << "\n";

    return 0;
}
