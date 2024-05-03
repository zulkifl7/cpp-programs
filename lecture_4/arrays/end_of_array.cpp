#include <iostream>
using namespace std;

int main()
{
    int num[5] = {1, 2, 3, 4, 5};

    int i = 0;

    while (true)
    {
        if (num[i] == "\0")
        {
            break;
        }
        cout << num[i] << endl;
        i++;
    }

    return 0;
}