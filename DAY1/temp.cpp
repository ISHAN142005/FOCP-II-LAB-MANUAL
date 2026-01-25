#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << fixed << setprecision(1);
    cout << celsius << "°C is equal to " << fahrenheit << "°F" << endl;

    return 0;
}
