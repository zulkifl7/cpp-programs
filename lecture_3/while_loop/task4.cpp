/*
write a cpp program ato get the item price and quantity of 10 items and display the bill

*/

#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    float price = 0, quantity = 0, total = 0;

    while (count <= 10)
    {
        cout << "Enyter item price and quantity format : [price quantity] - ";
        cin >> price >> quantity;

        cout << "Sub Total - " << price * quantity << "\n";
        total = total + (price * quantity);

        count++;
    }
    cout << "Bill Total - " << total << "\n";

    return 0;
}