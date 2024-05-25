/*
function 1
input marks of 10 students to a array

function 2
display all marks

function 3
calculate the average

function 4
display all values which are above average

*/

#include <iostream>
using namespace std;

// Global variables
// function 1
void takeInput(float arr1[], int size);
// function 2
void displayAll(float arr1[], int size);
// function 3
float calculateAverage(float arr1[], int size);
// function 4
void displayPass(float arr[], int size, float avg);
int main()
{

    float marks[10];
    takeInput(marks, 10);
    displayAll(marks, 10);
    float marksAverage = calculateAverage(marks, 10);
    displayPass(marks, 10, marksAverage);
    return 0;
}

void takeInput(float arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << " - ";
        cin >> arr1[i];
    }
}

void displayAll(float arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Marks of student " << i + 1 << " is - " << arr1[i] << endl;
    }
}

float calculateAverage(float arr1[], int size)
{
    float avg = 0;
    for (int i = 0; i < size; i++)
    {
        avg = avg + arr1[i] / size;
    }
    return avg;
}
// function 4
void displayPass(float arr[], int size, float avg)
{
    cout << "Marks above average are - ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > avg)
        {
            cout << arr[i] << " ";
        }
    }
}
