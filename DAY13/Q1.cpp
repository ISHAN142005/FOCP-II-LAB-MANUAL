/*
Question 1: Vehicle Rental System
Scenario: You are designing a vehicle rental system. There is a general class
Vehicle with attributes vehicleNumber and rentalPrice, and a method displayDetails().
You want to create a subclass Car that adds numberOfSeats and carType.
Tasks:
1. Write a simple C++ code snippet to implement this scenario.
*/
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string vehicleNumber;
    double rentalPrice;

public:
    Vehicle(string vNum, double price)
    {
        vehicleNumber = vNum;
        rentalPrice = price;
    }

    void displayDetails()
    {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Rental Price: " << rentalPrice << endl;
    }
};

class Car : public Vehicle
{
private:
    int numberOfSeats;
    string carType;

public:
    Car(string vNum, double price, int seats, string type)
        : Vehicle(vNum, price)
    {
        numberOfSeats = seats;
        carType = type;
    }

    void displayDetails()
    {
        Vehicle::displayDetails();
        cout << "Number of Seats: " << numberOfSeats << endl;
        cout << "Car Type: " << carType << endl;
    }
};

int main()
{
    Car myCar("RJ26CB0001", 25000.0, 5, "Sedan");
    myCar.displayDetails();

    return 0;
}
