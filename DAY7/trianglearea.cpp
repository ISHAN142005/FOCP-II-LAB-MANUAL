#include <iostream>
using namespace std;

class Triangle {
    double base, height;

public:
    Triangle() {
        base = 0;
        height = 0;
    }

    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    Triangle(double side) {
        base = side;
        height = (side * 0.866); 
    }

    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle t1;
    cout << "Area (default): " << t1.area() << endl;

    Triangle t2(10, 5);
    cout << "Area (base & height): " << t2.area() << endl;

    Triangle t3(6);
    cout << "Area (equilateral): " << t3.area() << endl;

    return 0;
}
