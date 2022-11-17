/* C++ program to find Sum of numbers using Overload template function  */

#include <iostream>
using namespace std;

template <class t1>
void sum(t1 a, t1 b, t1 c)
{
    cout << "\nTemplate function 1: Sum = " << a + b + c << endl;
}

template <class t1, class t2>
void sum(t1 a, t1 b, t2 c)
{
    cout << "\nTemplate function 2: Sum = " << a + b + c << endl;
}

void sum(int a, int b)
{
    cout << "\nNormal function: Sum = " << a + b << endl;
}

int main()
{
    int a, b;
    float x, y, z;
    cout << "\nEnter two integer data: ";
    cin >> a >> b;
    cout << "\nEnter three float data: ";
    cin >> x >> y >> z;
    sum(x, y, z); // calls first template function
    sum(a, b, z); // calls first template function
    sum(a, b);    // calls normal function
    return 0;
}