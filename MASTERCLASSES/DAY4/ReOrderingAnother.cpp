#include <iostream>
#include <string>
using namespace std;

int main()
{
    string org = "xebia";
    string temp = "";

    for (int i = org.size() - 1; i >= 0; i--)
    {
        temp += org[i];
    }

    cout << temp;
    return 0;
}