#include <iostream>
using namespace std;
class Base
{
public:
    Base(int x)
    {
        cout << "Base Constructor : " << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int a, int b) : Base(a)
    {
        cout << "Derived Constructor : " << b << endl;
    }
};

int main()
{
    Derived d(11, 123);
    return 0;
}