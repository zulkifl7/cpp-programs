/*
Develop a cpp program for ABC shop to insert the sales amount of 10 days
to an array and display the following

    - Display the total amount
    - Display the average amount
    - Display the days which are less than average
        Sample output
            Day 1
            Day 4
            Day 9
    - Display the total count of days which are above the average.
*/

#include <iostream>
using namespace std;

int main()
{
    float sales_amt[10], tot = 0, avg = 0, count = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number " << i + 1 << " - ";
        cin >> sales_amt[i];

        tot = tot + sales_amt[i];
    }
    avg = tot / 10;
    for (int k = 0; k < 10; k++)
    {
        if (sales_amt[k] < avg)
        {
            cout << "Day " << k + 1 << endl;
        }
        else
        {
            count++;
        }
    }
    cout << "Total number of sales above average - " << count;

    return 0;
}