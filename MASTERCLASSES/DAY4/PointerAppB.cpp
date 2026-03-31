#include <iostream>
#include <string>
using namespace std;

int main()
{
    string org = "xebia";
    int l = 0, r = org.length() - 1;

    while (l < r)
    {
        char temp = org[l];
        org[l] = org[r];
        org[r] = temp;

        l++;
        r--;
    }

    cout << org;
    return 0;
}