/* C++ Program to demonstrate Run time polymorphism  */

#include <iostream>
using namespace std;
class B // Base class
{
public:
    virtual void Display(void) // virtual function
    {
        cout << "\n The member function Display( ) ";
        cout << "of the \"Base Class B\" is invoked \n";
    }
};
class D1 : public B // First derived class
{
public:
    void Display(void)
    {
        cout << "\n The member function Display( ) ";
        cout << "of the \"Derived Class D1\" is invoked \n";
    }
};

class D2 : public B // Second derived class
{
public:
    void Display(void)
    {
        cout << "\n The member function Display() ";
        cout << "of the \"Derived Class D2\" is invoked ";
    }
};

int main()
{
    B *base_ptr; // Pointer to the object of the base class

    D1 der1_obj; // Object of the first derived class D1

    base_ptr = &der1_obj; /* The address of the object der1_obj of the
                                first derived class D1 is assigned to the
                                pointer base_ptr of the base class B     */

    base_ptr->Display(); // Accessing the member function Display( )

    D2 der2_obj; // Object of the second derived class D2

    base_ptr = &der2_obj; /* The address of the object der2_obj of the
                               second derived class D2  is assigned to the
                                pointer base_ptr of the base class B */

    base_ptr->Display(); // Accessing the member function Display( )
    return 0;
}