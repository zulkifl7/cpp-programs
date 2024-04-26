

#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    while (count <= 10)
    {
        if (count == 5)
        {
            break; // if we continue onlu the 5 will be skipped
        }
        cout << count << endl;
        count++;
    }

    return 0;
}