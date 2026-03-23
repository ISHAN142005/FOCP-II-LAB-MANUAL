#include <iostream>
using namespace std;
class animal
{
protected:
    void eat()
    {
        cout << "Animal is eating." << endl;
    }
};

// Derived Class
class Dog : public animal
{
public:
    void bark()
    {
        cout << "Dog is Barking" << endl;
    }
    void eatfunction()
    {
        eat();
    }
};

int main()
{
    Dog d;
    d.bark();
    d.eatfunction();
    return 0;
}