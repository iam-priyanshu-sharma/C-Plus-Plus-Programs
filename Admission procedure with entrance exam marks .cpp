#include <iostream>
#include <string.h>

using namespace std;
class Admission
{
private:
    int64_t contact_no;
    string sname, fname, mname;

public:
    void getAdmission()
    {
        cin.ignore();
        cout << "\nEnter your name:";
        getline(cin, sname);
        cout << "\nEnter father name:";
        getline(cin, fname);
        cout << "\nEnter your mother name:";
        getline(cin, mname);
        cout << "\nEnter Contact Number:";
        cin >> contact_no;
    }
};
class Result : public Admission
{
protected:
    int oop, account, math, dbms;

public:
    void getresult()
    {
        cout << "\nEnter marks of OOP's,Accounts,DBMS and Math:";
        cin >> oop >> account >> dbms >> math;
    }
};
class Project
{
protected:
    int L_oop, L_SQL;

public:
    void getproject()
    {
        cout << "\nEnter your marks of lab on c++ and lab on DBMS:";
        cin >> L_oop >> L_SQL;
    }
};
class Grade : public Project, public Result
{
    int total;
    float percent;

public:
    void getgrade()
    {
        total = oop + account + math + dbms + L_oop + L_SQL;
        cout << endl
             << "\nTotal marks = " << total << endl;
        percent = (total * 100) / 600;
        cout << "You get " << percent << "%" << endl;
        if (percent > 90)
            cout << "Grade = A " << endl;
        else if (percent > 80)
            cout << "Grade = B " << endl;
        else if (percent > 70)
            cout << "Grade = C " << endl;
        else if (percent > 60)
            cout << "Grade = D " << endl;
        else if (percent > 50)
            cout << "Grade = E " << endl;
        else
            cout << "FAIL";
    }
};
int main()
{
    int entrance;
    Grade C;
    cout << "Enter the entrance marks:";
    cin >> entrance;
    if (entrance > 60)
    {
        C.getAdmission();
        C.getresult();
        C.getproject();
        C.getgrade();
    }
    else
        cout << "\nSorry, You aren't eligible.";
    return 0;
}