#include <iostream>
using namespace std;

int main()
{
    float price = 0, qty = 0, tot = 0;
    char ans;

    do
    {
        cout << "Enter the price and quantity - ";
        cin >> price >> qty;
        tot = tot + (price * qty);
        cout << "Sub total - " << (price * qty) << endl;

        cout << "\n\nDo you  want to add another item? \nPress Y for Yes and N for No - ";
        cin >> ans;
    } while ((ans == 'y') or (ans == 'Y'));
    cout << "Your Bill total is - " << tot << endl;
    return 0;
}