/*
? develop a cpp program to
? insert 10 numbers to an array and display the numbers
? which are greater than the average value.

*/

#include <iostream>
using namespace std;

int main()
{
    float num[10], avg = 0, total = 0;
    // Geetting thr user input
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the number " << i + 1 << " - ";
        cin >> num[i];

        total = total + num[i];
    }
    // Calculating the average
    avg = total / 10;
    cout << "Average is - " << avg << " Values greater than Average ";

    // checking if the value is greater than average
    for (int k = 0; k < 10; k++)
    {
        if (num[k] > avg)
        {
            cout << num[k] << " ";
        }
    }

    return 0;
}