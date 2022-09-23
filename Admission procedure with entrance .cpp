#include<iostream>
using namespace std;
class Admission
{
private:
    int contact_no;
    char Name[20], fname[20],Mname[20];
public:
    void getAdmission()
    {
           cout<<"Enter your name"<<endl;
            cin>>Name;
            cout<<"Enter father name"<<endl;
            cin>>fname;
            cout<<"enter your mother name"<<endl;
            cin>>Mname;
        
    }
};
class Result:public Admission
{
protected:
    int oop,account, math,DBMS;
public:
    void getresult()
    {
        cout<<"Enter marks of oop, account,DBMS, math"<<endl;
        cin>>oop>>account>>DBMS>>math;
    }
};
class Project
{
protected:
    int L_oop, L_SQL;
public:
    void getproject()
    {
        cout<<"Enter your marks of lab on c++ and lab on DBMS"<<endl;
        cin>>L_oop>>L_SQL;
    }
};
class Grade:public Project, public Result
{
    int total;
    float percent;
public:
    void getgrade()
    {
        total = oop + account + math + DBMS + L_oop + L_SQL;
        cout<<endl<<"Total marks = "<<total<<endl;
        percent = (total * 100)/600;
        cout<<"You get "<<percent<<"%"<<endl;
        if(percent > 90)
            cout<<"Grade = A "<<endl;
        else if(percent > 80)
            cout<<"Grade = B "<<endl;
        else if(percent > 70)
            cout<<"Grade = C "<<endl;
        else if(percent > 60)
            cout<<"Grade = D "<<endl;
        else if(percent > 50)
            cout<<"Grade = E "<<endl;
        else
            cout <<"FAIL";
    }
};
int main()
{
int entrance;
    Grade C;
    cout<<"Enter the entrance marks"<<endl;
    cin>>entrance;
    if(entrance>60)
    {
    C. getAdmission();
    C. getresult();
    C. getproject();
    C. getgrade();
    }
    else
cout<<"sorry. you are not eligible";
    return 0;
}