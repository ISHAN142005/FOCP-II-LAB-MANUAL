#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    // pointer --> *
    // pointer stores the address
    // if you want to access memory address of a variable use ampersand(&)

    // &
    cout << a << endl;
    cout << &a << endl;

    // pointer --> *
    int *ptr = &a;
    cout << ptr << " ----- " << &a << endl;

    cout << *ptr << endl;

    return 0;
}
