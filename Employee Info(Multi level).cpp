#include <iostream>
#include <conio.h>
#include <string.h>
class Person
{
private:
    char name[20], gender[10];
    int age;

public:
    void getdata()
    {
        std::cout << "Enter Name:";
        std::cin >> name;
        std::cout << "\nEnter Gender:";
        std::cin >> gender;
        std::cout << "\nEnter Age:";
        std::cin >> age;
    }
    void display()
    {
        std::cout << "\nName:-" << name;
        std::cout << "\nAge:-" << age;
        std::cout << "\nGender:-" << gender;
    }
};
class Employee : public Person
{
private:
    char company[10];
    int salary;

public:
    void getdata()
    {
        Person::getdata();
        std::cout << "\nEnter Company name:";
        std::cin >> company;
        std::cout << "\nEnter Salary:";
        std::cin >> salary;
    }
    void display()
    {
        Person::display();
        std::cout << "\nCompany Name:" << company;
        std::cout << "\nSalary:" << salary;
    }
};
class Programmer : public Employee
{
private:
    int number;

public:
    void getdata()
    {
        Employee::getdata();
        std::cout << "\nNo. of Programming language known:";
        std::cin >> number;
    }
    void display()
    {
        Employee::display();
        std::cout << "\nProgramming language known:" << number;
    }
};
int main()
{
    Programmer P;
    P.getdata();
    P.display();
    return 0;
}