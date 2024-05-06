/*

A doctor checks the sugar level of 100 patients and enters the system. The patients who are having
less than 70 sugar level belong to the low sugar category while those who are having greater than
100 sugar level belong to the high sugar category. Those who have sugar level between 70 and
100 are normal. You may write the Flowchart and CPP code to find and display the percentages
of low sugar, high sugar, and normal patients.

*/

#include <iostream>
using namespace std;

int main()
{
    int num_of_patients = 10, hs_count = 0, ls_count = 0, ns_count = 0;
    // hs_count ==> high sugar count
    // ls_count ==> low sugar count
    // ns_count ==> normal sugar count
    float sugar_level[num_of_patients];

    for (int i = 0; i < num_of_patients; i++)
    {
        cout << "Enter the sugar level of patient " << i + 1 << " - ";
        cin >> sugar_level[i];

        if (sugar_level[i] > 100)
        {
            hs_count++;
        }
        else if (sugar_level[i] >= 70)
        {
            ns_count++;
        }
        else
        {
            ls_count++;
        }
    }
    cout << "Persentage of high sugar patients - " << (hs_count / num_of_patients) * 100 << endl;
    cout << "Persentage of Low sugar patients - " << (ls_count / num_of_patients) * 100 << endl;
    cout << "Persentage of Normal sugar patients - " << (ns_count / num_of_patients) * 100 << endl;
    return 0;
}