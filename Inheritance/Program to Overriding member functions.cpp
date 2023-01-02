/*  C++ Program to Overriding member functions using Inheritance  */

#include<iostream>
using namespace std;
const int len = 20 ;
class Employee
{
        private:
                char F_name[len];
                int I_number ;
                int age ;
                float salary ;
        public:
                void Enter_data(void)
                {
                        cout << "\n Enter the first name = " ; cin >> F_name ;
                        cout << "\n Enter the identity number = " ; cin >> I_number ;
                        cout << "\n Enter the age = " ; cin >> age ;
                        cout << "\n Enter the salary = " ; cin >> salary ;
                }
                void Display_data(void)
                {
                        cout << "\n Name = " << F_name ;
                        cout << "\n Identity Number = " << I_number ;
                        cout << "\n Age = " << age ;
                        cout << "\n Salary = " << salary ;
                }
};  // End of the base class

class Engineer : public Employee
{
        private:
                char design[len] ; // S_Engineer, J_Engineer, Ex_Engineer etc

        public:
                void Enter_data( )
                {
                        Employee :: Enter_data( ) ;  // Overriding of the member function
                        cout << "\n Enter the designation of the Engineer: " ; cin >> design ;
                }


                void Display_data(void)
                {
                        cout << "\n *******Displaying the particulars of the Engineer**** \n" ;
                        Employee :: Display_data( ) ; // Overriding of the member function
                        cout << "\n Designition = " << design ;
                }
}; // End of the derived class


int main(void)
{
                Engineer er ;
                er.Enter_data( ) ;
                er.Display_data( );
return 0;
}