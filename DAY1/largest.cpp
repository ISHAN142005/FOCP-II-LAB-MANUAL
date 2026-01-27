#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    int maxNum = numbers[0];
    for(int i = 1; i < 5; i++) {
        if(numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
    }

    cout << "The largest number is: " << maxNum << endl;

    return 0;
}
