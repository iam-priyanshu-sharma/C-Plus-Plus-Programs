#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    if (a > b)
        cout << endl
             << a << " is bigger.";
    else
        cout << endl
             << b << " is bigger.";
    return 0;
}