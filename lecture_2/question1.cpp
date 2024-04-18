/* develop a cpp prpogram to input marks of 3 subjects,
calculate the average and display pass if the average is above 50 or fail below 50 */

#include <iostream>
using namespace std;

int main()
{
    float marks1, marks2, marks3, avg;

    cout << "Enter the marks of the subjects : Formate : [subject1 subject2 subject3] - ";
    cin >> marks1 >> marks2 >> marks3;

    avg = (marks1 + marks2 + marks3) / 3;

    if (avg > 50)
    {
        cout << "You are pass!!\n";
    }
    else
    {
        cout << "You are fail!!\n";
    }
    return 0;
}