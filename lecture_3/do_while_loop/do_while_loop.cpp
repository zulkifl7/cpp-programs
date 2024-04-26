/*
while loop is an entry control loop
do while loop is an exit control loop

structure
------------
do
{
    code
} while (condition);

*/

// example 1

#include <iostream>
using namespace std;

int main()
{
    int count = 11;
    do
    {
        cout << "Hello world!" << endl;
        count++;
    } while (count <= 10);

    return 0;
}