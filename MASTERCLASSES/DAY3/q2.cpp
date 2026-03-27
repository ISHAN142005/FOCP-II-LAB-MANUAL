#include <iostream>
using namespace std;
int main()
{
    int input[8];
    float sum = 0;
    for (int i = 0; i < 8; i++)
    {
        cout << "Enter the " << i + 1 << " number here:";
        cin >> input[i];
        sum += input[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
    float avg = (sum / 8.0);

    cout << "The average of input is:" << avg << endl;
    return 0;
}