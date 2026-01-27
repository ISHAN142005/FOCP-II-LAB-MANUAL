#include <iostream>
using namespace std;
// take infinitr no of inputs from the user and as negative number is enterd stoperation the function
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int operation;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> n;

        if (n < 0)
        {
            cout << "Thanks!" << endl;
            break;
        }

        sum += n;

        cout << "Enter:" << endl
             << "1 for displaying sum" << endl
             << "2 for closing function" << endl;
        cin >> operation;

        if (operation == 1)
        {
            cout << "The sum of all entered numbers is: " << sum << endl;
        }
        else if (operation == 2)
        {
            cout << "Thanks!" << endl;
            break;
        }
    }

    return 0;
}