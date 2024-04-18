#include <iostream>  // in codeblocks or vscode we dont use .h extention
using namespace std; // so we use this command

int main()
{
    // displaying an output
    cout << "\nHi\t Bossaaaaa!!!\n";
    cout << "Hello world!!\n\n";
    // Variable declaration or creating a variable
    int empNo;

    // Variable initialization or assigning values to variables
    empNo = 10;

    // declaration with initialization
    int empNo2 = 20;

    // outputing the variable value
    cout << "Employee number is " << empNo2 << "\n\n";

    // char data types - which can only hold
    // character and we have to use single qout '
    char letter;
    letter = 'A';

    cout << "The char is " << letter << "\n";

    // How to take an integer input
    int num1;
    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Entered number is " << num1 << "\n";

    return 0;
}