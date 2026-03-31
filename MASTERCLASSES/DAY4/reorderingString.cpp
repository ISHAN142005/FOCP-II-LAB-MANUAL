#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "xebia";
    string temp = "";  

    temp += s[4];
    temp += s[3];
    temp += s[2];
    temp += s[1];
    temp += s[0];

    cout << temp;
    return 0;
}