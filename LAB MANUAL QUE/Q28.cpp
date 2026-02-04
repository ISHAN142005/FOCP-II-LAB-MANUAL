/*
Q28. A data processing system classifies even and odd inputs separately. Implement a solution to
store 5 elements in an array, compute sum of all even and sum of all odd numbers.
*/
#include <iostream>
using namespace std;
int main()
{
    int n[5];
    int oddsum = 0;
    int evensum = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number  " << i + 1 << " here:";
        cin >> n[i];
        if (n[i] % 2 == 0)
        {
            evensum += n[i];
        }
        else if ((n[i] % 3 == 0 || n[0] == 1))
        {
            oddsum += n[i];
        }
    }

    cout << "The sum of all odd numbers is:" << oddsum << endl;
    cout << "The sum of all even numbers is:" << evensum << endl;

    return 0;
}