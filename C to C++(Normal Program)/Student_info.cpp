#include <iostream>
#include <string.h>
using namespace std;

class Student_info
{
private:
    int roll;
    string name;
    int marks;

public:
    void getdata()
    {
        cout << "Enter Name Of Student:";
        getline(cin, name);
        cout << "\nEnter Roll NO.:";
        cin >> roll;
        cout << "\nEnter Marks Of Student:";
        cin >> marks;
    }
    void display()
    {
        cout<<"\n******** Student Information ********";
        cout << "\nStudent Name:" << name;
        cout << "\nRoll No.:" << roll;
        cout << "\nMarks:" << marks;
    }
};
int main()
{
    Student_info S;
    S.getdata();
    S.display();
    return 0;
}