#include <iostream>
using namespace std;

int main()
{

    int num[5] = {20, 30, 40, 50, 60}, user_in = 0;

    cout << "Enter your selection - ";
    cin >> user_in;

    cout << num[user_in];

    return 0;
}