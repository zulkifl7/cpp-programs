#include <iostream>
using namespace std;

int main()
{
    int hours = 0, minutes = 0, inMinutes = 0;

    cout << "Enter the time in (H MM) format: ";
    cin >> hours >> minutes;

    inMinutes = (hours * 60) + minutes;
    cout << "Time is : " << inMinutes << "\n";
    return 0;
}