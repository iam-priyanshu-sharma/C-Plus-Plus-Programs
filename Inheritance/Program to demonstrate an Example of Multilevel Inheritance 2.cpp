/*  C++ Program to demonstrate an Example of Multilevel Inheritance */

#include<iostream>
using namespace std;
class Base
{
        protected:
                int b;
        public:
                void EnterData( )
                {
                        cout << "\n Enter the value of b: ";
                        cin >> b;
                }
                void DisplayData( )
                {
                        cout << "\n b = " << b;
                }
};

class Derive1 : public Base
{
        protected:
                int d1;
        public:
                void EnterData( )
                {
                        Base:: EnterData( );
                        cout << "\n Enter the value of d1: ";
                        cin >> d1;
                }
                void DisplayData( )
                {
                        Base::DisplayData();
                        cout << "\n d1 = " << d1;
                }
};


class Derive2 : public Derive1
{
        private:
                int d2;
        public:
                void EnterData( )
                {
                        Derive1::EnterData( );
                        cout << "\n Enter the value of d2: ";
                        cin >> d2;
                }
                void DisplayData( )
                {
                        Derive1::DisplayData( );
                        cout << "\n d2 = " << d2;
                }
};

int main()
{
        Derive2 objd2;
        objd2.EnterData( );
        objd2.DisplayData( );
        return 0;
}