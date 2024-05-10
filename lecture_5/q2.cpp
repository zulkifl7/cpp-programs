/*
you were assigned to write a cpp programto manage details of an item.
the program contains three functions as described below.

? Function 1 : Accept item name, item price and quantity from the user.
? Function 2 : Calculate final total bill using the formulas.
            total bill = item price * quantity

Discount Rate -

Total Bill > 10000
10% Discount

Total Bill > 5000
7% Discount

Total Bill > 2500
4.5% Discount

? Function 3 : Display the final bill.

? Main Function : Invoke other functions in the proper manner.


*/

#include <iostream>
#include <string>
using namespace std;

// Global variables
string itemName;
float itemPrice = 0, quantity = 0;

// Function 1
void inputData()
{
    cout << "Enter item name - ";
    getline(cin, itemName);
    cout << "Enter item price and Quantity - ";
    cin >> itemPrice >> quantity;
}

// Function 2
float billCalculation()
{
    if ((itemPrice * quantity) > 10000)
    {
        return ((itemPrice * quantity) - (itemPrice * quantity * 0.1));
    }
    else if ((itemPrice * quantity) > 5000)
    {
        return ((itemPrice * quantity) - (itemPrice * quantity * 0.07));
    }
    if ((itemPrice * quantity) > 2500)
    {
        return ((itemPrice * quantity) - (itemPrice * quantity * 0.045));
    }
    else
    {
        return (itemPrice * quantity);
    }
}

// Function 3
void displayBill()
{
    cout << "Your final bill amount is - " << billCalculation() << endl;
}

int main()
{
    inputData();
    displayBill();
}