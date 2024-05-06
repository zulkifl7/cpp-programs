#include <iostream>
using namespace std;

int main()
{
    int emp_no = 0, year_of_work = 0;

    // looping 50 times to get 50 inputs of employees
    for (int count = 1; count <= 50; count++)
    {
        // getting user employee number and years of work
        cout << "Enter employee number and years of work in the\nformat : [employee_number years_of_work] - ";
        cin >> emp_no >> year_of_work;

        // checking if the user has eexperiance more than 10 years
        if (year_of_work >= 10)
        {
            cout << emp_no << endl;
        }
    }

    return 0;
}