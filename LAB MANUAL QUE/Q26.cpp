/*
Q26. The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    float marks[5];
    float total = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of " << i + 1 << " subject(0-100):";
        cin >> marks[i];
        total += marks[i];
    }
    cout << "The total marks achieved by the student is:" << total << endl;
    float percentage = total / 5;
    cout<<fixed<<setprecision(2);
    cout<<"The percentage of the student is:"<<percentage<<endl;

    return 0;
}