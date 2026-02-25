#include <iostream>
#include <conio.h>
using namespace std;

class person
{
private:
    string name;
    int age;

public:
    person(string n, int a)
    {
        name = n;
        age = a;
        cout << "constructor called for" << name << endl;
    }
    void display()
    {
        cout << "name: " << name << "age: " << age << endl;
    }
    ~person()
    {
        cout << "destructor called for" << name << endl;
    }
};
// global object
person globalperson("global user", 40);
int main()
{
    cout << "inside mainfunction\n";
    person localperson("john", 20); // local object
    localperson.display();
    return 0;
}