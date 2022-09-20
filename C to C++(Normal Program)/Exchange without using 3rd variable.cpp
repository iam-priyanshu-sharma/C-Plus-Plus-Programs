#include<iostream>

using namespace std;

class Exchange
{
    private:
            int x,y;
    public:
            void getdata()
            {
                cout<<"Enter two integers:";
                cin >> x >> y;
            }
            void display()
            {
                cout<<"\nBefore interchanging"<<endl<<"1st variable="<<x<<endl<<"2nd variable="<<y;
                x=x +y ;
                y=x-y;
                x=x-y;
                cout<<"\nAfter interchanging"<<endl<<"1st variable="<<x<<endl<<"2nd variable="<<y;
            }
};
int main()
{
    Exchange E;
    E.getdata();
    E.display();
    return 0;
}