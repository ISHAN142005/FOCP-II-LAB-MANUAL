#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double usdAmount;
    double conversionRate = 0.92;

    cout << "Enter amount in USD: ";
    cin >> usdAmount;

    double euroAmount = usdAmount * conversionRate;

    cout << "--- Conversion ---" << endl;
    cout << "USD: $" << fixed << setprecision(2) << usdAmount << endl;
    cout << "EUR: " << fixed << setprecision(2) << euroAmount << "€" << endl;

    return 0;
}
