#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string name = "VOLVO";
    int year = 2000;

    void display() {
        cout << "The car name is " << name << endl;
        cout << "The car launch year is " << year << endl;
    }
};

class Car : public Vehicle {
public:   
    void spec() {
        cout << "The model no of car is 0143." << endl;
        cout << "The seating capacity of car is 5." << endl;
    }
};

class ElectricCar : public Car {   
public:  
    void capacity() {
        cout << "The battery capacity of the car is 600 km." << endl;
    }
};

int main() {
    ElectricCar A;
    A.display();    
    A.spec();       
    A.capacity();   
    return 0;
}