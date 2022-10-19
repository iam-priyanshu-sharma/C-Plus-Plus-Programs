#include <iostream>

using namespace std;

class Arithmetic_operations
{
private:
    int x, y, sum, diff, pro, quo, rem;

public:
    void getdata(int a, int b)
    {
        x = a;
        y = b;
    }
    int add()
    {
        sum = x + y;
        return sum;
    }
    int sub()
    {
        diff = x - y;
        return diff;
    }
    int mult()
    {
        pro = x * y;
        return pro;
    }
    int div()
    {
        quo = x / y;
        return quo;
    }
    int rem_div()
    {
        rem = x % y;
        return rem;
    }
};
int main()
{
    int x1, y1, sum, diff, mult, div, rem;
    Arithmetic_operations AO;
    cout << "Enter two numbers:";
    cin >> x1 >> y1;
    AO.getdata(x1, y1);
    sum = AO.add();
    diff = AO.sub();
    mult = AO.mult();
    div = AO.div();
    rem = AO.rem_div();
    cout << "\nSum = " << sum;
    cout << "\nDifference = " << diff;
    cout << "\nProduct = " << mult;
    cout << "\nQuotient = " << div;
    cout << "\nRemainder = " << rem;
    return 0;
}