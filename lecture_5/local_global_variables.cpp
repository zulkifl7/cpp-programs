#include <iostream>
using namespace std;

int num1 = 21;

void display()
{

    int num1 = 10;

    cout << "Number 1 from display scope - " << num1 << endl;
}

int main()
{

    cout << "Number 1 from global scope - " << num1 << endl;
    display();

    return 0;
}