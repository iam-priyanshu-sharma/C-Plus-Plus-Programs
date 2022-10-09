#include <iostream>

using namespace std;

class Biggest
{
private:
    int a, b, c;

public:
    int big(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }
};
int main()
{
    Biggest B;
    int a1, b1, c1, big;
    cout << "Enter 3 numbers:";
    cin >> a1 >> b1 >> c1;
    big = B.big(a1, b1, c1);
    cout << "\n"
         << big << " is biggest number.";
    return 0;
}