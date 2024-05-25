#include <iostream>
#include <string>
using namespace std;

string empName;
float basicSalary = 0, otHours = 0;
void getInput();
float calculateSalary();
void display(float salary);

int main()
{
    getInput();
    display(calculateSalary());

    return 0;
}

void getInput()
{
    cout << "Enter your name - ";
    getline(cin, empName);
    cout << "Enter basic salary and OT Hours - ";
    cin >> basicSalary >> otHours;
}
float calculateSalary()
{
    if (basicSalary > 100000)
    {
        return (basicSalary + (otHours * 1000));
    }
    if (basicSalary > 50000)
    {
        return (basicSalary + (otHours * 500));
    }
    if (basicSalary > 25000)
    {
        return (basicSalary + (otHours * 350));
    }
    else
    {
        return (basicSalary + (otHours * 100));
    }
}
void display(float salary)
{

    cout << "Employee Name - " << empName << endl
         << "Basic SAlary - " << basicSalary << endl;
    cout << "OT Hours - " << otHours << endl
         << "Salary - " << salary << endl;
}
