#include <iostream>
using namespace std;

int main()
{
    float basic_salary = 0, bonus_amount = 0, salary_diduction = 0, incriment_persentage = 0, final_salary = 0;
    cout << "Enter Basic, bonus, diduction, incriment persentage : Format [20000 15000 2000 0.3] - ";
    cin >> basic_salary >> bonus_amount >> salary_diduction >> incriment_persentage;

    final_salary = (basic_salary + basic_salary * incriment_persentage) + bonus_amount - salary_diduction;

    cout << "Your salary is " << final_salary << "\n";

    return 0;
}