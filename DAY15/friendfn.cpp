#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student(int m) : marks(m) {}

    friend void showMarks(Student s);

    void show();
};

void showMarks(Student s)
{
    cout << "Marks (via friend function): " << s.marks << endl;
}

void Student::show()
{
    cout << "Marks (via member function): " << marks << endl;
}

int main()
{
    Student s1(85);

    showMarks(s1);

    s1.show();

    return 0;
}
