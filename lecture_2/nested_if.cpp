/*
If the is a if condition inside another if statement or a else statemen it is a nested if condition

Syntax
------
if (Boolean expression 1)
{
    if (Boolean expression 1)
    {
        condition
    }
}
*/

/*
Example : 1
-----------
user have 2 pin numbers
pin1 = 123 , pin2 = 789
both should be correct
*/

#include <iostream>
using namespace std;

int main()
{
    int pin1, pin2;

    cout << "Enter both the pin numbers - ";
    cin >> pin1 >> pin2;

    if (pin1 == 123)
    {
        if (pin2 == 789)
        {
            cout << "Correct pin numbers!!\n";
        }
        else
        {
            cout << "Pin 2 is incorrect!!\n";
        }
    }
    else
    {
        cout << "Pin 1 is incorrect!!\n";
    }

    return 0;
}