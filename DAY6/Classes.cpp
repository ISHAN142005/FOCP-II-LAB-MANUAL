#include <iostream>
using namespace std;
class Student
{
private: // Private:only accessible insidee this class
    int marks;

protected: // Protected: accessible inside class (and derived classes)
    int RollNumber;

public: // Public: accessible everywhere
    string Name;

    // Setter for Private and Protected Data
    void setData(int m, int r)
    {
        marks = m;
        RollNumber = r;
    }

    // Getter from Private Data
    int GetMarks()
    {
        return marks;
    }

    // Function to show protected data
    void showRollNumber()
    {
        cout << "Roll Number:" << RollNumber << endl;
    }
};

int main()
{
    // Object Creation
    Student s1;

    s1.Name = "Ishan";

    // Setting Private & Protected values
    s1.setData(98, 340);

    cout << "Name:" << s1.Name << endl;
    cout << "Marks:" << s1.GetMarks() << endl;

    // Accessing protected data using public function
    s1.showRollNumber();

    // This would give error
    // s1.marks=90;          Private hai!
    // s1.RollNumber=101;    Protected hai!
    return 0;
}