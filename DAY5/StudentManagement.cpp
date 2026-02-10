#include <iostream>
#include <string>

using namespace std;

void addStudent(string ids[], string names[], int &count);
int searchStudent(string ids[], int count, string key);
void inputMarks(int marks[][10], int index, int subjects);
float calculateStudentAverage(int marks[][10], int index, int subjects);
char calculateGrade(float avg);
bool isPass(float avg);
void displayStudent(string ids[], string names[], int marks[][10], int index, int subjects);
void calculateClassAverage(int marks[][10], int count, int subjects);
void findTopScorer(string ids[], string names[], int marks[][10], int count, int subjects);
void resultSummary(string ids[], string names[], int marks[][10], int count, int subjects);

int main()
{
    string ids[50];
    string names[50];
    int marks[50][10] = {0};
    int studentCount = 0;
    int numSubjects = 3;

    int choice, subChoice;

    do
    {
        cout << "\n*** MAIN MENU ***\n1. Student Operations\n2. Reports & Analytics\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1)
        {
            do
            {
                cout << "\n-- STUDENT OPERATIONS --\n1. Add New Student\n2. Enter/Update Marks\n3. View Student Details\n4. Back\nChoice: ";
                cin >> subChoice;

                if (subChoice == 1)
                {
                    addStudent(ids, names, studentCount);
                }
                else if (subChoice == 2 || subChoice == 3)
                {
                    string id;
                    int idx;
                    cout << "Enter Student ID: ";
                    cin >> id;
                    idx = searchStudent(ids, studentCount, id);
                    if (idx != -1)
                    {
                        if (subChoice == 2)
                            inputMarks(marks, idx, numSubjects);
                        else
                            displayStudent(ids, names, marks, idx, numSubjects);
                    }
                    else
                        cout << "Student not found!\n";
                }
            } while (subChoice != 4);
        }
        else if (choice == 2)
        {
            do
            {
                cout << "\n-- REPORTS & ANALYTICS --\n1. Class Average\n2. Top Scorer\n3. Result Summary\n4. Back\nChoice: ";
                cin >> subChoice;
                if (subChoice == 1)
                    calculateClassAverage(marks, studentCount, numSubjects);
                else if (subChoice == 2)
                    findTopScorer(ids, names, marks, studentCount, numSubjects);
                else if (subChoice == 3)
                    resultSummary(ids, names, marks, studentCount, numSubjects);
            } while (subChoice != 4);
        }
    } while (choice != 3);

    return 0;
}

void addStudent(string ids[], string names[], int &count)
{
    if (count >= 50)
    {
        cout << "System full!\n";
        return;
    }
    string id;
    cout << "Enter ID: ";
    cin >> id;
    if (searchStudent(ids, count, id) != -1)
    {
        cout << "Duplicate ID Error!\n";
        return;
    }
    ids[count] = id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, names[count]);
    count++;
}

int searchStudent(string ids[], int count, string key)
{
    for (int i = 0; i < count; i++)
    {
        if (ids[i] == key)
            return i;
    }
    return -1;
}

void inputMarks(int marks[][10], int index, int subjects)
{
    for (int i = 0; i < subjects; i++)
    {
        do
        {
            cout << "Subject " << i + 1 << " (0-100): ";
            cin >> marks[index][i];
        } while (marks[index][i] < 0 || marks[index][i] > 100);
    }
}

float calculateStudentAverage(int marks[][10], int index, int subjects)
{
    float sum = 0;
    for (int i = 0; i < subjects; i++)
        sum += marks[index][i];
    return sum / subjects;
}

char calculateGrade(float avg)
{
    if (avg >= 90)
        return 'A';
    if (avg >= 75)
        return 'B';
    if (avg >= 60)
        return 'C';
    if (avg >= 40)
        return 'D';
    return 'F';
}

bool isPass(float avg)
{
    return avg >= 40;
}

void displayStudent(string ids[], string names[], int marks[][10], int index, int subjects)
{
    float avg = calculateStudentAverage(marks, index, subjects);
    cout << "\nID: " << ids[index] << " | Name: " << names[index] << endl;
    cout << "Avg: " << avg << " | Grade: " << calculateGrade(avg) << " | " << (isPass(avg) ? "PASS" : "FAIL") << endl;
}

void calculateClassAverage(int marks[][10], int count, int subjects)
{
    if (count == 0)
        return;
    float total = 0;
    for (int i = 0; i < count; i++)
        total += calculateStudentAverage(marks, i, subjects);
    cout << "Class Average: " << total / count << endl;
}

void findTopScorer(string ids[], string names[], int marks[][10], int count, int subjects)
{
    if (count == 0)
        return;
    int topIdx = 0;
    float topAvg = -1;
    for (int i = 0; i < count; i++)
    {
        float currentAvg = calculateStudentAverage(marks, i, subjects);
        if (currentAvg > topAvg)
        {
            topAvg = currentAvg;
            topIdx = i;
        }
    }
    cout << "Top Scorer: " << names[topIdx] << " (" << topAvg << ")\n";
}

void resultSummary(string ids[], string names[], int marks[][10], int count, int subjects)
{
    cout << "\n--- Result Summary ---\n";
    for (int i = 0; i < count; i++)
    {
        displayStudent(ids, names, marks, i, subjects);
    }
}