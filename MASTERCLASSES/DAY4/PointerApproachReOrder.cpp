#include <iostream>
#include <string>
using namespace std;

int main() {
    string org = "xebia";
    int L = 0, R = org.size() - 1;

    while (L < R) {
        swap(org[L], org[R]);
        L++;
        R--;
    }

    cout << org;
    return 0;
}