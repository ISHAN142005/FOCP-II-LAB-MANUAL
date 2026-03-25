#include <iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "Base class function!" << endl;
    }
};

class Derived : public Base
{
public:
    void Display()
    {
        cout << "Derived class function!" << endl;
    }
};

int main()
{
    Base a;
    a.show();
    Derived b;
    b.show();
    b.Display();
}