#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cout << "Enter a number to generate its table: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
