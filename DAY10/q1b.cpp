#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    string name;
    int year;

    Vehicle(string n, int y)
    {
        name = n;
        year = y;
    }

    void display()
    {
        cout << "The car name is " << name << endl;
        cout << "The car launch year is " << year << endl;
    }
};

class Car : public Vehicle
{
public:
    int modelNo;
    int seatingCapacity;

    Car(string n, int y, int m, int s) : Vehicle(n, y)
    {
        modelNo = m;
        seatingCapacity = s;
    }

    void spec()
    {
        cout << "The model no of car is " << modelNo << endl;
        cout << "The seating capacity of car is " << seatingCapacity << endl;
    }
};

class ElectricCar : public Car
{
public:
    int batteryCapacity;

    ElectricCar(string n, int y, int m, int s, int b) : Car(n, y, m, s)
    {
        batteryCapacity = b;
    }

    void capacity()
    {
        cout << "The battery capacity of the car is " << batteryCapacity << " km." << endl;
    }
};

int main()
{
    ElectricCar A("VOLVO", 2000, 1999, 5, 600);

    A.display();
    A.spec();
    A.capacity();

    return 0;
}