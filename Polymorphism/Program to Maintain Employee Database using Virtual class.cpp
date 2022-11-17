/*  C++ Program to Maintain Employee Database using Virtual class  */

#include <iostream>
#include <stdlib.h>
using namespace std;

class person
{
protected:
    char name[20];
    int code;

public:
    void getdetail(void)
    {
        cout << "\n\nEnter name :- ";
        cin >> name;
        cout << "\nEnter code :- ";
        cin >> code;
    }
    void dispdetail(void)
    {
        cout << "\n\nNAME      :- " << name;
        cout << "\nCODE      :- " << code;
    }
};

class account : virtual public person
{
protected:
    float pay;

public:
    void getpay(void)
    {
        cout << "\nEnter Pay amount :- ";
        cin >> pay;
    }
    void dispay(void)
    {
        cout << "\nPAY       :- " << pay;
    }
};

class admin : virtual public person
{
protected:
    int experience;

public:
    void getexpr(void)
    {
        cout << "\nEnter Experience in yrs :- ";
        cin >> experience;
    }
    void dispexpr(void)
    {
        cout << "\nEXPERIENCE:- " << experience;
    }
};

class master : public account, public admin
{
public:
    void create(void)
    {
        cout << "\n\n=====GETDATA IN=====\n";
        getdetail();
        getpay();
        getexpr();
    }

    void display(void)
    {
        cout << "\n\n=====DISPLAY DETAILS=====\n";
        dispdetail();
        dispay();
        dispexpr();
    }

    void update(void)
    {
        cout << "\n\n=====UPDATE DETAILS=====\n";
        cout << "\nChoose detail you want to update\n";
        cout << "1)  NAME\n";
        cout << "2)  CODE\n";
        cout << "3)  EXPERIENCE\n";
        cout << "4)  PAY\n";
        cout << "Enter your choice:- ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\n\nEnter name : - ";
            cin >> name;
            break;
        case 2:
            cout << "\n\nEnter code :- ";
            cin >> code;
            break;
        case 3:
            cout << "\n\nEnter pay :- ";
            cin >> pay;
            break;
        case 4:
            cout << "\n\nEnter Expereince :- ";
            cin >> experience;
            break;
        default:
            cout << "\n\nInvalid choice\n\n";
        }
    }
};

int main()
{
    master ob1;
    int choice;
    while (1)
    {

        cout << "\n\n=====EMPLOYE DATABASE=====\n\n";
        cout << "\nChoose Operation you want to perform\n";
        cout << "1)  Create  Record\n";
        cout << "2)  Display Record\n";
        cout << "3)  Update  Record\n";
        cout << "4)  Exit\n";
        cout << "\nEnter your choice:- ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            ob1.create();
            break;
        case 2:
            ob1.display();
            break;
        case 3:
            ob1.update();
            break;
        case 4:
            exit(1);
        default:
            cout << "\n\nInvalid Choice\nTry Again\n\n";
        }
    }
    return 0;
}