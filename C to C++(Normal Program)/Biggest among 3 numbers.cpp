#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers:";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << endl
             << a << " is largest.";
    else if (b > c)
        cout << endl
             << b << " is largest.";
    else
        cout << endl
             << c << " is largest.";
    return 0;
}