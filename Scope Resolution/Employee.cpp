#include <iostream>
#include <conio.h>
class Employee
{
private:
    int salary, code;
    char desig[50], dept[50], name[20];


public:
    void input();
    void display();
};
void Employee::input()
{

    std::cout << "Enter name:";
    std::cin >> name;
    std::cout << "\n"
              << "Enter code:";
    std::cin >> code;
    std::cout << "\n"
              << "Enter designation:";
    std::cin >> desig;
    std::cout << "\n"
              << "Enter department:";
    std::cin >> dept;
    std::cout << "\n"
              << "Salary:";
    std::cin >> salary;
}
void Employee::display()
{
    std::cout << "\n\n\n"
              << "Name:" << name;
    std::cout << "\n"
              << "Code:" << code;
    std::cout << "\n"
              << "Designation:" << desig;
    std::cout << "\n"
              << "Department:" << dept;
    std::cout << "\n"
              << "Salary:" << salary;
}
int main()
{
    Employee E;
    E.input();
    E.display();
    return 0;
}
