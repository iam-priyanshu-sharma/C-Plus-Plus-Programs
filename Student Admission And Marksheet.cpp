#include <iostream>
#include <string.h>

using namespace std;

class Admission
{
protected:
    string sname, fname, mname;
    int roll, age;
    int64_t contact;

public:
    void getstu()
    {
        cin.ignore();
        cout << "\nEnter Student Name:";
        getline(cin, sname);
        cout << "\nEnter Father's Name:";
        getline(cin, fname);
        cout << "\nEnter Mother's Name:";
        getline(cin, mname);
        cout << "\nEnter Contact Number:";
        cin >> contact;
        cout << "\nEnter student roll no.:";
        cin >> roll;
        cout << "\nEnter student age:";
        cin >> age;
    }
    void display()
    {
        cout << "\nStudent Name:" << sname;
        cout << "\nFather's Name:" << fname;
        cout << "\nMother's Name:" << mname;
        cout << "\nContact Number:" << contact;
        cout << "\nRoll NO.:" << roll;
        cout << "\nAge:" << age;
    }
};
class Result : public Admission
{
protected:
    float physics, chemistry, maths, total;

public:
    void getresult()
    {
        cout << "\nEnter Physics, Chemistry and Maths marks:";
        cin >> physics >> chemistry >> maths;
        total = physics + chemistry + maths;
    }
    void display()
    {
        cout << "\nPhysics=" << physics;
        cout << "\nChemistry=" << chemistry;
        cout << "\nMaths=" << maths;
        cout << "\nTotal Marks excluding project marks=" << total;
    }
};
class Project
{
protected:
    int pro_marks;

public:
    void getproject()
    {
        cout << "\nEnter project marks:";
        cin >> pro_marks;
    }
    void display()
    {
        cout << "\nProject Marks=" << pro_marks;
    }
};
class Grade : public Result, public Project
{
private:
    float percentage;
    char grade;

public:
    void getgrade()
    {
        Admission::display();
        Result::display();
        Project::display();
        cout << "\nTotal Marks including project marks=" << total + pro_marks;
        percentage = (total + pro_marks) / 500 * 100;
        cout << "\nPercentage obtained=" << percentage;
        if (percentage > 90)
            cout << "\nGrade A";
        else if (percentage > 80 && percentage <= 90)
            cout << "\nGrade B";
        else if (percentage > 70 && percentage <= 80)
            cout << "\nGrade C";
        else if (percentage > 60 && percentage <= 70)
            cout << "\nGrade D";
        else if (percentage > 50 && percentage <= 60)
            cout << "\nPass(Obtained passing percentage)";
        else
            cout << "\nFail.";
    }
};
int main()
{
    int entrance_no;
    Grade G;
    cout << "\nEnter Your Entrance Exam Marks:";
    cin >> entrance_no;
    if (entrance_no < 60)
        cout << "\nNot Eligible For Admission.";
    else
    {
        G.getstu();
        G.getresult();
        G.getproject();
        G.getgrade();
    }
    return 0;
}
