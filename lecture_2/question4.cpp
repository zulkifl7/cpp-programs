/*
input - item type, item number , quentity

                item type - A   item type - B
item number     1       2       1       2
price           500     700     1000    1500

*/

#include <iostream>
using namespace std;

int main()
{
    int item_no = 0, qty = 0;
    char type;

    cout << "Enter item number and item type : Format [type number quantity] - ";
    cin >> type >> item_no >> qty;

    if (type == 'A')
    {
        if (item_no == 1)
        {
            cout << "Total price - " << (500 * qty) << "\n";
        }
        else if (item_no == 2)
        {
            cout << "Total price - " << (700 * qty) << "\n";
        }
        else
        {
            cout << "Invalid item number!!!!\n";
        }
    }
    else if (type == 'B')
    {
        if (item_no == 1)
        {
            cout << "Total price - " << (1000 * qty) << "\n";
        }
        else if (item_no == 2)
        {
            cout << "Total price - " << (1500 * qty) << "\n";
        }
        else
        {
            cout << "Invalid item number!!!!\n";
        }
    }
    else
    {
        cout << "Invalid item type!!!\n";
    }
    return 0;
}