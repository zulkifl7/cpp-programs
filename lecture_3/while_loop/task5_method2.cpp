/*
input series of numbers which teminates when user insert -9 and display the total
of numbers which user inserted
*/

#include <iostream>
using namespace std;

int main()
{
    float num = 0, total = 0;

    while (true)
    {
        cout << "Enter the number - ";
        cin >> num;
        if (num == -9)
        {
            break;
        }
        total = total + num;
    }

    cout << "Your total is - " << total;

    return 0;
}