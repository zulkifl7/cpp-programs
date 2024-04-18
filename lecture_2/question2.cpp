#include <iostream>
using namespace std;

int main()
{
    float marks1, marks2, marks3, avg;

    cout << "Enter your subject marks : Format [subject1 subject2 subject3] - ";
    cin >> marks1 >> marks2 >> marks3;

    avg = (marks1 + marks2 + marks3) / 3;
    if (avg > 75)
    {
        cout << "A\n";
    }
    else if (avg > 60)
    {
        cout << "B\n";
    }
    else if (avg > 50)
    {
        cout << "C\n";
    }
    else if (avg > 35)
    {
        cout << "Pass\n";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}