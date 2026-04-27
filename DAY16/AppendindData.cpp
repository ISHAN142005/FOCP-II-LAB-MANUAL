#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("data.txt", ios::app);

    file << "\nNew line added!";
    file.close();
    return 0;
}