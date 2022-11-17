/*  C++ Program to Read and Write student details into a File  */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

class student
{
public:
    int roll;
    char name[100], f_name[100];
    void put();
    void get();
    void switch_case();
};
student s;

void student::put()
{

    fstream file;
    cout << "\nEnter roll no ::  ";
    cin >> roll;
    cout << "\nEnter name :: ";
    cin >> name;
    cout << "\nEnter father name :: ";
    cin >> f_name;

    file.open("C:\\Users\\acer\\Documents\\file4.txt", ios::out | ios::app);

    file.write((char *)this, sizeof(student));
    file.close();

    s.switch_case();
}

void student::get()
{
    int temp;

    cout << "\nEnter roll no: ";
    cin >> temp;
    fstream file;
    file.open("C:\\Users\\acer\\Documents\\file4.txt", ios::in);
    file.seekg(0, ios::beg);

    while (file.read((char *)this, sizeof(student)))
        ;
    {
        if (roll == temp)
        {
            cout << "\nName ::  " << name << endl;
            cout << "Roll no. :: " << roll << endl;
            cout << "Father name :: " << f_name << endl
                 << endl;
        }
    }

    file.close();

    s.switch_case();
}

void student::switch_case()
{
    int i;
    cout << "\n1)- Read\n2)- Write\n3)- Exit)\n\nEnter your choice :: ";
    cin >> i;
    switch (i)
    {
    case 1:
        s.put();
        break;

    case 2:
        s.get();
        break;

    case 3:
        exit(0);

    default:
        cout << "\nWrong choice ";
    }
}

int main()
{
    s.switch_case();
    return 0;
}