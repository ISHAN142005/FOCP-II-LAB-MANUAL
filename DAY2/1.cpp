#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "Ishan";
    string alpabet = "abcdefghi";
    cout << name.size() << endl;
    cout << name.length() << endl;
    cout << name[0] << endl;
    cout << name.at(0) << endl;
    cout << name.front() << endl;
    cout << name.back() << endl;
    name += "Bohra";    // Last mai add ho jayega
    name.append(" :)"); // Last mai add ho jayega
    cout << name << endl;
    name.insert(5, "."); // at particular index pe insert hoga
    cout << name << endl;
    // name.erase()
    alpabet.erase(0, 2); // first kaha se erase krna aur second for kitne erase karne hai
    cout << alpabet << endl;
    cout << name.find("Bohra") << endl; // konse index pe aaya  yeh first occurence dega
    cout << name.rfind("a") << endl;    // last occurence kab hui thi
    string sub = name.substr(5, 10);    // yeh 5th index ke baad se aur 10 ch extract karega as new string
    cout << sub << endl;

    string a = "Circle";
    string b = "Sphere";
    if (a == b)
    {
        cout << "a equal to b" << endl;
    }
    if (a != b)
    {
        cout << "a is not equal to b" << endl;
    }

    return 0;
}