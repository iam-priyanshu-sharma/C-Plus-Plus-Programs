#include<iostream>

using namespace std;

class Merit_list
{
    private:
            string name,formno;
            int marks;
    public:
            void getdata()
            {
                cout<<"Enter Name Of Student:";
                getline(cin,name);
                cout<<"\nEnter Form No.:";
                getline(cin,formno);
                cout<<"\nTotal Marks Obtained In Class 12th:";
                cin>>marks;
            }        
            void display()
            {
                cout<<"\n********Final Merit List For B.C.A. Sem 1st Admission********";
                cout<<"\n-------------------------------------------------------------";
                cout<<"\nForm No.\t\tStudent Name\t\tMarks of std 12th";
                cout<<"\n"<<formno<<"\t\t"<<name<<"\t\t"<<marks;
            }
};
int main()
{
    Merit_list M;
    M.getdata();
    M.display();
    return 0;
}