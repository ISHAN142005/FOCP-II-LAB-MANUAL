#include <iostream>
using namespace std;
class Base
{
public:
   Base()
    {
        cout << "Base class default conseuctor called!" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class default conseuctor called!" << endl;
    }
};

int main()
{
    Base a;
    Derived b;
}