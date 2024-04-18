// Write a program to input height and width of a rectangle and output thee area and perimeter
// area = height x width
// perimeter =  2 x (height + width)

#include <iostream>
using namespace std;

int main()
{
    float height = 0, width = 0, area = 0, perimeter = 0;

    cout << "Enter the height - ";
    cin >> height;

    cout << "Enter the width - ";
    cin >> width;

    area = height * width;
    perimeter = 2 * (height + width);

    cout << "Area - " << area << "\nPerimeter - " << perimeter << "\n";

    return 0;
}