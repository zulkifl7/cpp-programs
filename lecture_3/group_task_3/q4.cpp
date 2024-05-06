#include <iostream>
using namespace std;

int main()
{
    int elec_units = 0, tot_bill = 0;

    // getting electrcity units used
    cout << "Enter the electricity units used - ";
    cin >> elec_units;

    // for units morethan 100
    if (elec_units >= 100)
    {
        tot_bill = elec_units * 30;
    }
    // for units 50 - 99
    else if (elec_units >= 50)
    {
        tot_bill = elec_units * 20;
    }
    // for units 0 - 49
    else if (elec_units >= 0)
    {
        tot_bill = elec_units * 10;
    }
    // for invalid inputs
    else
    {
        cout << "You have entered a wrong input!!!\n";
    }

    // calculating the tax for bill amount morethan 5000
    if (tot_bill > 5000)
    {
        tot_bill = tot_bill + (tot_bill * 0.05);
    }
    // calcuating the discount for bill less than 500
    else if (tot_bill < 500)
    {
        tot_bill = tot_bill - (tot_bill * 0.05);
    }

    // displaying the final bill amount
    cout << "Your bill ammount is - " << tot_bill << endl;

    return 0;
}