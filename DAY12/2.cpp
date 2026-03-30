#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Class A\n";
    }
};
class B
{
public:
    void display()
    {
        cout << "Class B\n";
    }
};

class C : public B, public A
{

public:
    void show()
    {
        cout << "Class C\n";
    }
};

int main()
{
    C object;
    object.A::display();
    object.B::display();
    object.show();
    // object.display();this will be ambigous
    return 0;
}