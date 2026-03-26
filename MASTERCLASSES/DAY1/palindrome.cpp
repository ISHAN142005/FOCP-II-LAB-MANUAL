#include <iostream>
using namespace std;
int main()
{
    int x;
    int org;
    int rem;
    int rev = 0;
    cin >> x;
    org = x;
    while (x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    if (rev == org)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}