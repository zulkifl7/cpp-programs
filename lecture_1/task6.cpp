#include <iostream>
using namespace std;

int main()
{
    int item_num = 0, quantity = 0;
    float item_price = 0, discount_rate = 0, total = 0;

    cout << "Enter item number, item price, quantity, discount rate: Formate [2344 1500.00 4 0.10] - ";
    cin >> item_num >> item_price >> quantity >> discount_rate;

    total = (item_price * quantity) - (item_price * quantity * discount_rate);

    cout << "Total : " << total << "\n";

    return 0;
}