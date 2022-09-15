#include <iostream>
#include <conio.h>
#include <string.h>
class Name
{
protected:
    char a[20];

public:
    void name()
    {
        std::cout << "\nEnter a name:";
        std::cin >> a;
    }
};
class Roll_no
{
protected:
    int b;

public:
    void roll()
    {
        std::cout << "\nEnter roll no.:";
        std::cin >> b;
    }
};
class Course
{
protected:
    char c[20];

public:
    void course()
    {
        std::cout << "\nEnter Course name:";
        std::cin >> c;
    }
};
class Semester
{
protected:
    char d[10];

public:
    void sem()
    {
        std::cout << "\nEnter semester:";
        std::cin >> d;
    }
};
class Student : public Name, public Roll_no, public Course, public Semester
{
public:
    void display()
    {
        std::cout << "\nName Of Student:" << a;
        std::cout << "\nRoll No.:" << b;
        std::cout << "\nCourse Name:" << c;
        std::cout << "\nSemester:" << d;
    }
};
int main()
{
    Student s1;
    s1.name();
    s1.roll();
    s1.course();
    s1.sem();
    s1.display();
    return 0;
}