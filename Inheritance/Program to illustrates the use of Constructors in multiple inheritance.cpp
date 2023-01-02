/* C++ Program to illustrates the use of Constructors in multiple inheritance  */

#include<iostream>
using namespace std;
class A  // First Base class
{
        private:
                int x ;
        public:
                A( )    // Constructor of the base class A without any argument
                {
                          x = 0 ;
                          cout << "\n Constructor of class A without any argument is invoked" ;
                }
                A(int X)   // Constructor of the base class A with one argument
                {
                          x = X ;
                         cout << "\n Constructor of class A with one argument is invoked" ;
                }

                void Enter_x(void)
                { cout << "\n\n\t Enter the value of x: " ; cin >> x ; }

                void Display_x(void)
                { cout << "\n\t x = " << x ;  }
};

class B   // Second Base class
{
        private:
                int y ;
        public:
                B( )
                {
                     y = 0 ; // Constructor of the base class B without any argument
                     cout << "\n Constructor of class B without any argument is invoked" ;
                }
                B(int Y) // Constructor of the base class B with one argument
                {
                        y = Y ;
                        cout << "\n Consrtuctor of class B with one argument isinvoked" ;
                }
                void Enter_y(void)
                { cout << "\t Enter the value of y: " ; cin >> y ; }
                void Display_y(void)
                { cout << "\n\t y = " << y ;  }
};


class C : public B, public A   //Derived class, inherited from base classes A & B
{
        private:
                int z ;
        public:
                C( ) : A( ), B( ) // Constructor of the derived class C without any argument
                {
                        z = 0 ;
                        cout << "\n Constructor of class C without any argument is invoked" ;
                }
                // *****Constructor of the derived class C with three arguments*****
                C(int X,   // Argument for the constructor A
                            int Y,   // Argument for the constructor B
                                int Z)   // Argument for the constructor C
                                        : A(X), B(Y)  // Calls for the constructors A and B
                {
                        z = Z ;
                        cout << "\n Consrtuctor of class C with three arguments is invoked\n" ;
                }
                void Enter_z(void)
                { cout << "\t Enter the value of z: " ; cin >> z ;  }
                void Display_z(void)
                { cout << "\n\t z = " << z ; }
};


int main()
{
                cout << "\n The first object c1 is in use********\n" ;
                C c1 ;
                c1.Enter_x( );
                c1.Enter_y( );
                c1.Enter_z( );
                c1.Display_x( );
                c1.Display_y( );
                c1.Display_z( );
                cout << "\n\n The second object c2 is in use********\n" ;
                C c2(5, 6, 7) ;
                c2.Display_x( );
                c2.Display_y( );
                c2.Display_z( );
return 0;
}