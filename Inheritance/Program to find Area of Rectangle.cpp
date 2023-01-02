/*  C++ Program to find Area of Rectangle using inheritance  */

#include<iostream>
using namespace std;
class Rectangle
{
     private:
        float length ; // This can't be inherited
     public:
        float breadth ; // The data and member functions are inheritable
        void Enter_lb(void)
        {
               cout << "\n Enter the length of the rectangle : "; 
                     cin >> length ;
               cout << "\n Enter the breadth of the rectangle : ";            
               cin >> breadth ;
        }
        float get_l(void)
        {      return length ; } 
};  // End of the class definition

class Rectangle1 : public Rectangle   
{      
     private:
        float area ;
      public:
        void Rec_area(void)
        {  area = get_l( ) * breadth ;  } 
        // area = length * breadth ;  can't be used here
void Display(void)
     {
       cout << "\n Length = " << get_l( ) ; // Object of the derived class can't
              //    inherit the private member of the base class. Thus the member
              //   function is used here to get the value of data member 'length'.
       cout << "\n Breadth = " << breadth ;
       cout << "\n Area = " << area  ;
     }
};  // End of the derived class definition D
int main()
{
        Rectangle1 r1 ;
        r1.Enter_lb( );
        r1.Rec_area( );
        r1.Display( );
return 0;
}