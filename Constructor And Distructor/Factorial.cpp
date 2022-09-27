#include <iostream>

using namespace std;

class Factorial
{
private:
    int a, i;
    int64_t fact;

public:
    Factorial(int x)
    {
        fact = 1;
        a = x;
        for (i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
        cout << "\nFactorial of " << a << "=" << fact;
    }
};
int main()
{
    int a1;
    cout << "\nEnter a number:";
    cin >> a1;
    Factorial F(a1);
    return 0;
}