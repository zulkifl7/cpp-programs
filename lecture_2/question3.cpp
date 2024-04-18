/* develop a cpp program to input the selling price and  cost price and
display the profit ammount ot the ammount of loss! if there is no profit or loss - no profit or loss*/

#include <iostream>
using namespace std;

int main()
{
    float cost = 0, price = 0;

    cout << "Enter the cost and selling price : Format  [cost price] - ";
    cin >> cost >> price;

    if (cost > price)
    {
        cout << "You have lost " << (cost - price) << " Rupees!!\n";
    }
    else if (price > cost)
    {
        cout << "You have earned " << (price - cost) << " Rupees!!\n";
    }
    else
    {
        cout << "No profit or no loss!!";
    }

    return 0;
}