#include <iostream>

using namespace std;

class Biggest
{
private:
    int a, b, c;

public:
    void getdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void big()
    {
        if (a > b && a > c)
            cout << "\n"
                 << a << " is largest.";
        else if (b > c)
            cout << "\n"
                 << b << " is largest.";
        else
            cout << "\n"
                 << c << " is largest.";
    }
};
int main()
{
    int x1, y1, z1;
    cout << "\nEnter three numbers:";
    cin >> x1 >> y1 >> z1;
    Biggest B;
    B.getdata(x1, y1, z1);
    Biggest B1(B);
    B1.big();
    return 0;
}