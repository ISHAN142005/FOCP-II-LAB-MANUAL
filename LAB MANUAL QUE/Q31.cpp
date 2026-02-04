/*
Q31. A manufacturing QC system checks defect codes divisible by both 3 and 5.
Implement a solution to store 5 elements in an array and
count how many numbers are divisible by 3 and 5.
*/

#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number  " << i + 1 << " here:";
        cin >> num[i];
        if (num[i] % 3 == 0 && num[i] % 5 == 0)
        {
            count++;
        }
    }
    cout << "The number divisible by both 3 and 5 are:" << count << endl;
}