#include <iostream>
using namespace std;

int main()
{
    int user_in = 0, tot = 0;

    // getting the user input for number
    cout << "Enter the number you want to find the series - ";
    cin >> user_in;

    // looping from 1 to user's number
    for (int count = 1; count <= user_in; count++)
    {
        // calculation
        tot = tot + (count * count);
    }
    // output
    cout << "Your answer is - " << tot << endl;
    return 0;
}