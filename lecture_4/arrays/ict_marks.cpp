/*
? Develp a cpp progrema to insert ICT marks
? of 10 students to an array and display the marks which are greater than 50

*/

#include <iostream>
using namespace std;

int main()
{
    float ict_marks[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the marks of student " << i + 1 << " - ";
        cin >> ict_marks[i];
    }

    for (int k = 0; k < 10; k++)
    {
        if (ict_marks[k] > 50)
        {
            cout << ict_marks[k] << " ";
        }
    }

    return 0;
}