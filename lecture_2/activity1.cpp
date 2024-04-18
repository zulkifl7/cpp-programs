#include <iostream>
using namespace std;

int main()
{
    int product_code, qty;
    float price;

    cout << "Enter product code , price and quantity - ";
    cin >> product_code >> price >> qty;

    switch (product_code)
    {
    case 1:
        cout << "Your final price - " << (price * qty) - (price * qty * 0.03);
        break;

    case 2:
        cout << "Your final price - " << (price * qty) - (price * qty * 0.05);
        break;

    default:
        cout << "Invalid input!!\n";
    }
    return 0;
}