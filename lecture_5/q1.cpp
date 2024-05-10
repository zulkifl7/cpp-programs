/*
develop a cpp program using functions to input 3 numbers
and display the average
*/

#include <iostream>
using namespace std;

float take_input();

// float total(float a, float b, float c)
// {
//     return (a + b + c);
// }

// float average(float tot, int frequency)
// {
//     return (tot / frequency);
// }

int main()
{
    float n1[3] = take_input();

    // cout << "The average is - " << average(total(n1[0], n1[1], n1[2]), 3) << endl;
    return 0;
}

float take_input()
{
    float num[3];
    cout << "Enter 3 numbers - ";
    cin >> num[0] >> num[1] >> num[2];
    return num;
}