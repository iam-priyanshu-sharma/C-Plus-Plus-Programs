#include <iostream>

using namespace std;

class Exchange
{
private:
    int x, y, z;

public:
    Exchange(int a, int b)
    {
        x = a;
        y = b;
        cout << "\nBefore interchanging:\n1st varible=" << x << "\n2n Variable=" << y;
        z = x;
        x = y;
        y = z;
        cout << "\nAfter interchanging:\n1st varible=" << x << "\n2n Variable=" << y;
    }
};
int main()
{
    int x1, y1;
    cout << "Enter two numbers:";
    cin >> x1 >> y1;
    Exchange E(x1, y1);
    return 0;
}