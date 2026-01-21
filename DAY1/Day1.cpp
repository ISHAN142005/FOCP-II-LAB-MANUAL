#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

    // cout<<"Hello World";
    // Q1.WAP to create a calculator to calculate the grade
    int n;
    float sum = 0;
    string grade;
    int x;
    cout << "Enter the total number of subjects: ";
    cin >> n;
    int marks[n];

    float total = n * 100;
    float p = total / 100;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks(0-100) of " << i + 1 << " subject:";
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }
    cout << fixed << setprecision(2);
    float percentage;
    percentage = sum / p;
    cout << "The percentage of the student is:" << percentage << endl;

    if (percentage > 90)
    {
        grade = "A++";
        x = 1;
    }
    else if (percentage > 70 && percentage <= 90)
    {
        grade = "A";
        x = 2;
    }
    else if (percentage > 50 && percentage <= 70)
    {
        grade = "B";
        x = 3;
    }
    else if (percentage > 33 && percentage <= 50)
    {
        grade = "C";
        x = 4;
    }

    switch (x)
    {
    case 1:
        cout << "Grade:A++";
        break;
    case 2:
        cout << "Grade:A";
        break;
    case 3:
        cout << "Grade:B";
        break;
    case 4:
        cout << "Grade:C";
        break;

    default:
        cout << "Invalid" << endl;
        break;
    }

    return 0;
}