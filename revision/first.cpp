// inputs , outputs , process
/*

code block


*/

#include <iostream> // input output
using namespace std;

int age[10] = {23, 54, 23, 43, 76, 34, 22, 34, 65, 34};

int display(int number)
{
    cout << "age of person on number " << number << " is " << age[number - 1] << endl;

    return age[number - 1];
}

int main()
{
    cout << "Hello" << endl;

    int year = 2024;
    int a = display(5);
    cout << year - a << endl;

    cout << "age of person on number " << 7 << " is " << age[6] << endl;
    cout << year - age[6];

    cout
        << endl;
    return 0;
}
