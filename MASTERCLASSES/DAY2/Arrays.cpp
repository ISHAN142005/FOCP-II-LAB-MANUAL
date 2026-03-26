#include <iostream>
using namespace std;

int main()
{
    int no[5] = {10, 20, 30, 40, 50};

    for (int i = 4; i >= 0; i--)
    {
        cout << no[i] << " ";
    }

    return 0;
}