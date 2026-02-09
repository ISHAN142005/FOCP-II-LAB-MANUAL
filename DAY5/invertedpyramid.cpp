#include <iostream>
#include <string>
using namespace std;

void Pattern(int rows)
{
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    Pattern(rows);
    return 0;
}