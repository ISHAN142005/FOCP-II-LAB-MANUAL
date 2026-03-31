#include <iostream>
#include <string>
using namespace std;
int main()
{
    string des;
    string a = "Ishan Bohra";
    cout << a << endl;
    cout << "Describe yourself in a line:";
    getline(cin, des);
    cout << des << endl;
    cout << "Thank You:)" << endl;

    string a1 = "Good ";
    string a2 = "Morning!";
    string a12 = a1 + a2;
    cout << a12 << endl;

    /// Length of string
    cout << "Length of string a is:" << a.length() << endl;

    string greet = "Hello";
    // Indexing of strings-
    for (int i = 0; i < greet.length(); i++)
    {
        cout << greet[i];
    }
    return 0;
}