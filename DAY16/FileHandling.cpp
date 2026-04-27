#include <iostream>
#include <fstream> //---->Header used for file handling
/*
It consists of the=ree class
1.ofstream --->Write into a file   of means output file
2.ifstream --->read from file      if means input file
3.fstream  --->both read+Write
*/
using namespace std;
int main()
{
    ofstream file("data.txt"); // creates open file  ofstream is the class , file is the object 
    file << "Hello C++ file handling!"<<endl;
    file << "I am Ishan Bohra ";
    file.close(); // close file

    return 0;
}