#include <iostream>

using namespace std;

class Armstrong
{
private:
    int n, temp, sum = 0, r;

public:
    int arm(int a)
    {
        n = a;
        temp = n;
        while (n != 0)
        {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }
        if (temp == sum)
            return 0;
        else
            return 1;
    }
};
int main()
{
    Armstrong A;
    int x, arm;
    cout << "Enter a number:";
    cin >> x;
    arm = A.arm(x);
    if (arm == 0)
        cout << "\nThe given number is armstrong number.";
    else
        cout << "\nThe given number isn't armstrong number.";
    return 0;
}