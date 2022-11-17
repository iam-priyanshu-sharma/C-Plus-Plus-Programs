/*  C++ Program to illustrates the use of Virtual base class  */

#include <iostream>
using namespace std;
// This program illustrates the use of the virtual base class
class B // Base class
{
protected:
    int base_data;

public:
    void get_b_data(int b)
    {
        cout << "\n\n Accessing the data from the base class B------------>";
        base_data = b;
    }
    void display_b_data(void)
    {
        cout << "\n base_data = " << base_data;
    }
};
class D1 : virtual public B // First virtual base class.
{                           // This class is derived from the class B.
protected:
    int der1_data;

public:
    void get_d1_data(int d1)
    {
        cout << "\n\n Accessing the data from the derived class D1---------->";
        der1_data = d1;
    }
    void display_d1_data(void)
    {
        cout << "\n der1_data = " << der1_data;
    }
};

class D2 : virtual public B // Second virtual base class.
{                           // This class is also derived from the class B.
protected:
    int der2_data;

public:
    void get_d2_data(int d2)
    {
        cout << "\n\n Accessing the data from the derived class D2---------->";
        der2_data = d2;
    }
    void display_d2_data(void)
    {
        cout << "\n der2_data = " << der2_data;
    }
};
class D3 : public D1, public D2 // This class inherits the properties of the
{                               // classes B, D1 and D2.
public:
    int der3_data;

public:
    void get_d3_data(int d3)
    {
        cout << "\n\n Accessing the data from the derived class D3---------->";
        der3_data = d3;
    }
    void display_d3_data(void)
    {
        cout << "\n der3_data = " << der3_data;
    }
};

int main()
{
    D3 der3;            // Object of the class D3.
    der3.get_b_data(7); // Accessing the member functions of the base class B.
    der3.display_b_data();
    der3.get_d1_data(8); // Accessing the member functions of the class D1.
    der3.display_d1_data();
    der3.get_d2_data(18); // Accessing the member functions of the class D2.
    der3.display_d2_data();
    der3.get_d3_data(15); // Accessing the member functions from its own class D3.
    der3.display_d3_data();
    return 0;
}