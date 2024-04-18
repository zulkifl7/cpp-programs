/*
enter 2 numbers

press -
1 - add
2 - sub
3 - mul
4 - div

*/

#include <iostream>
using namespace std;

int main()
{
    float num1 = 0, num2 = 0;
    int comand;
    cout << "1 - add\n2 - sub\n3 - mul\n4 - div\n\nEnter 2 numbers and command - ";
    cin >> num1 >> num2 >> comand;

    switch (comand)
    {
    case 1:
        cout << (num1 + num2);
        break;
    case 2:
        cout << (num1 - num2);
        break;
    case 3:
        cout << (num1 * num2);
        break;
    case 4:
        cout << (num1 / num2);
        break;

    default:
        cout << "Invalid input!!\n";
    }

    return 0;
}