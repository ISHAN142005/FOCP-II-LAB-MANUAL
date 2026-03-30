#include <iostream>
using namespace std;

class Vehicle
{
public:
    void fuel()
    {
        cout << "Vehicle needs fuel." << endl;
    }
};

class Car : public Vehicle
{
public:
    void drive()
    {
        cout << "Car is driving." << endl;
    }
};

class Boat : public Vehicle
{
public:
    void sail()
    {
        cout << "Boat is sailing." << endl;
    }
};

class AmphibiousCar : public Car, public Boat
{
public:
    void transform()
    {
        cout << "Switching between land and water mode." << endl;
    }
};

int main()
{
    AmphibiousCar ac;
    ac.drive();
    ac.sail();
    ac.transform();
    return 0;
}