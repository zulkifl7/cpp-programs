#include <iostream>
using namespace std;

int main()
{
    float n1 = 0.0, n2 = 0.0, n3 = 0.0, tot = 0.0, avg = 0.0;

    cout << "Enter number 1 - ";
    cin >> n1;

    cout << "Enter number 2 - ";
    cin >> n2;

    cout << "Enter number 3 - ";
    cin >> n3;

    tot = n1 + n2 + n3;
    avg = tot / 3;

    cout << "Total is : " << tot << "\nAverage is : " << avg << "\n";

    return 0;
}