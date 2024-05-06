#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    float price[num], min_hold = 0, max_hold = 0;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter number " << i + 1 << " - ";
        cin >> price[i];
    }
    min_hold = price[0];
    max_hold = price[0];
    for (int k = 1; k < num; k++)
    {
        //? Finding the min
        if (min_hold > price[k])
        {
            min_hold = price[k];
        }
        //? Finding the max
        if (max_hold < price[k])
        {
            max_hold = price[k];
        }
    }
    cout << "Min number - " << min_hold << " Max number - " << max_hold << endl;

    return 0;
}