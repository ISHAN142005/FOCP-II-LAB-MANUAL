#include <iostream>
using namespace std;
class A
{
public:
    void base()
    {
        cout << "Base of Class A\n";
    }
};
class B : public A
{
public:
    void childB()
    {
        cout << "Derived Class B\n";
    }
};

class C : public A
{

public:
    void childC()
    {
        cout << "Derived Class C\n";
    }
};

int main()
{
    B obj1;
    C obj2;
    obj1.base();
    obj1.childB();
    obj2.base();
    obj2.childC();
    return 0;
}