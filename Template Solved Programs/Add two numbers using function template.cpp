/*  C++ Program to Add two numbers using function template  */

#include <iostream>
using namespace std;

template <class t1, class t2>
void sum(t1 a, t2 b) // defining template function
{
    cout << "\nSum=" << a + b << endl;
}

int main()
{
    int a, b;
    float x, y;
    cout << "\nEnter two integer data: ";
    cin >> a >> b;
    cout << "\nEnter two float data: ";
    cin >> x >> y;
    sum(a, b); // adding two integer type data
    sum(x, y); // adding two float type data
    sum(a, x); // adding a float and integer type data
    return 0;
}