#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("data.txt"); // open file for reading
    string text;
    while (getline(file, text))
    {
        cout << text << endl;
    }
    file.close();//--->While handling multiple files then its good
    return 0;
}