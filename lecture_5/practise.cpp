#include <iostream>
using namespace std;

int *getRandom()
{

    int r[3];

    r[0] = 1;
    r[1] = 2;
    r[2] = 3;

    return r;
}

int main()
{

    int *p;

    p = getRandom();

    cout << p[0] << endl;

    return 0;
}