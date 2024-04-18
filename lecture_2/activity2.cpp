#include <iostream>
using namespace std;

int main()
{
    int cu_no, pw;
    float o_value, discount = 0;

    cout << "Enter customer number, password and order value - ";
    cin >> cu_no >> pw >> o_value;

    if ((cu_no % 2) == 0)
    {
        discount = 0.1;
    }
    else
    {
        discount = 0.05;
    }

    cout << "Your final price - " << (o_value - o_value * discount) << "\n";

    return 0;
}