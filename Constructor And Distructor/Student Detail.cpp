/*Program to print name,roll,course,sem & fee*/
#include <iostream>
#include <string.h>

using namespace std;

class Student
{
private:
    string name, sem, course;
    int roll, fee;

public:
    Student()
    {
        cout << "\nEnter name of student:";
        getline(cin, name);
        cout << "\nEnter Roll No.:";
        cin >> roll;
        cin.ignore();
        cout << "\nEnter course name:";
        getline(cin, course);
        cout << "\nEnter Semester:";
        getline(cin, sem);
        cout << "\nEnter Fees:";
        cin >> fee;
        cout << "\nName Of Student:" << name;
        cout << "\nRoll No.:" << roll;
        cout << "\nCourse:" << course;
        cout << "\nSemester:" << sem;
        cout << "\nFees:" << fee;
    }
};
int main()
{
    Student S;
    return 0;
}