#include <iostream>

using namespace std;

class Bigger
{
private:
    int a, b;

public:
    int big(int x, int y)
    {
        a = x;
        b = y;
        if (a > b)
            return a;
        else
            return b;
    }
};
int main()
{
    Bigger B;
    int a1, b1, big;
    cout << "Enter two numbers:";
    cin >> a1 >> b1;
    big = B.big(a1, b1);
    cout << "\n"
         << big << " is bigger number.";
    return 0;
}