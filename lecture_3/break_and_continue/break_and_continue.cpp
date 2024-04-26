

#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    while (count <= 10)
    {
        if (count == 5)
        {
            continue;
            // break; // if we continue onlu the 5 will be skipped. also we need to incriment count inside if before continue statement
        }
        cout << count << endl;
        count++;
    }

    return 0;
}