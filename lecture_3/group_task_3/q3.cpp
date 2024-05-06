/*
Special Note
-----------

In this task it says average of 20 customers in the hour.
while it is an average the number of customer could be 20 , less or more.

considering this practical senario we are not looping for 20 customers!
we are using a method when user entered amount as -9 the program will end.

*/

#include <iostream>
using namespace std;

int main()
{
    float bill_amount = 0, total_sales = 0;

    // looping to get bill amounts
    while (true)
    {
        // getting bill ammount
        cout << "Enter the bill ammount - ";
        cin >> bill_amount;

        // ending the loop when user want it to
        if (bill_amount == -9)
        {
            break;
        }
        // deducting 7% for bill ammount more than 15000 and adding that to the total bill
        else if (bill_amount >= 15000)
        {
            total_sales = total_sales + (bill_amount - bill_amount * 0.07);
        }
        // deducting 5% for bill ammount more than 10000 and adding that to the total bill
        else if (bill_amount >= 10000)
        {
            total_sales = total_sales + (bill_amount - bill_amount * 0.05);
        }
        // adding the value without a discount deduction for bill amount less than 10000 (which includes below 5000)
        else
        {
            cout << "while your bill amount is less than 10000, No discount!";
            total_sales = total_sales + bill_amount;
        }
    }
    // displayinmg the total sales of the hour
    cout << "Total sales on the hour is - " << total_sales;
    return 0;
}
