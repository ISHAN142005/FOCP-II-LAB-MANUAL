#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> v;//created a dynamic array

//1.Adding elements!
v.push_back(10);
v.push_back(20);
v.push_back(30);

cout<<"Elements:"<<v[0];
cout<<"Elements:"<<v[1];
cout<<"Elements:"<<v[2];

//2.print all elements
cout<<"Elements:";
for(int x:v)cout<<x<<" "<<endl;
/*
or
for(int i=0;i<3;i++){
cout<<v[i]<<endl;}
*/

//3.Size of Vector
cout<<"Size:"<<v.size()<<endl;

//4.accessing first and last elements
cout<<"First element:"<<v.front()<<endl;
cout<<"Last element:"<<v.back()<<endl;


//5.Accessing elements safely using at()
cout<<"Elements at index 1:"<<v.at(1)<<endl;
cout<<"Elements at index 2:"<<v.at(2)<<endl;
cout<<"Elements at index 3:"<<v.at(3)<<endl;

//6.Remove last element
v.pop_back();
cout<<"After v.popback:";
for(int x:v)cout<<x<<" "<<endl;
    return 0;

//7.check if empty
//v.empty();

}