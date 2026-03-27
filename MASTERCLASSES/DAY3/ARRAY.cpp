#include <iostream>
using namespace std;
int main()
{
    int input[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i + 1 << " number here:";
        cin >> input[i];
    }
    cout << "Printing array in reverse order :";
    for (int i = 4; i >= 0; i--)
    {
        cout << input[i] << " ";
    }
    return 0;
}