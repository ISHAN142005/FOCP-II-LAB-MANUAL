#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter in lowercase only!" << endl;
    string a, b;
    cout << "Enter two strings: ";
    cin >> a >> b;

    if (a.length() != b.length())
    {
        cout << "Not Anagram" << endl;
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; i < a.length(); i++)
    {
        count[a[i] - 'a']++;
        count[b[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << "Not Anagram" << endl;
            return 0;
        }
    }

    cout << "Anagram" << endl;
    return 0;
}