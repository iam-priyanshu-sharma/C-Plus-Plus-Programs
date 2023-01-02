/*  C++ Program display Student Marksheet using Multiple inheritance  */

#include<iostream>
#include<stdio.h>

using namespace std;
class student
{
        int roll;
        char name[25];
        char add [25];
        char city[25];
        public:
    student()
        {
                cout<<"  welcome in the student information system  "<<endl;
        }
        void getdata()
        {
                cout<<"\n enter the student roll no.  ";
                cin>>roll;
                cout<<"\n enter the student name  ";
                cin>>name;
                cout<<"\n enter ther student address  ";
                cin>>add;
                cout<<"\n enter the student city  ";
                cin>>city;
        }
        void putdata()
        {
                cout<<"\n the student roll no: "<<roll;
                cout<<"\n the student name: "<<name;
                cout<<"\n the student coty: "<<city;
        }
};
class marks: public student
{
        int sub1;
        int sub2;
        int sub3;
        int per;
        public:

    void input()
        {
                getdata();
                cout<<"\n enter the marks1: ";
                cin>>sub1;
                cout<<"\n enter the marks2: ";
                cin>>sub2;
                cout<<"\n enter the marks3: ";
                cin>>sub3;
        }
        void output()
        {
                putdata();
                cout<<"\n marks1: "<<sub1;
                cout<<"\n marks2: "<<sub2;
                cout<<"\n marks3: "<<sub3<<"\n";
        }
        void calculate ()
        {
                per= (sub1+sub2+sub3)/3;
                cout<<"\n total percentage :: "<<per<<"\n";
        }
};

int main()
{
        marks m1;
        int ch;
        int count=0;
        do
        {
                cout<<"\n1.input data";
                cout<<"\n2.output data";
                cout<<"\n3.Calculate percentage";
                cout<<"\n4.exit\n";
                cout<<"\nEnter the choice :: ";
                cin>>ch;
                switch (ch)
                {
        case 1:
                        m1.input();
                        count++;
                        break;

        case 2:
                        m1.output();
                        break;

        case 3:
                        m1.calculate();
                        break;
                }
        } while (ch!=4);
}