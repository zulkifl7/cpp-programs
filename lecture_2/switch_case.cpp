#include <iostream>
using namespace std;

int main()
{
    char value;

    cout << "Enter the charactor - ";
    cin >> value;

    switch (value)
    {
    case 'a':
    case 'A':
        cout << "You have entered a\n";
        break;
    case 'b':
    case 'B':
        cout << "You have entered b\n";
        break;
    case 'c':
    case 'C':
        cout << "You have entered c\n";
        break;

    default:
        cout << "Invalid charactor!!\n";
    }
    return 0;
}