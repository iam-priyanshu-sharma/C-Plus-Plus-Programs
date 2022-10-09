#include <iostream>

using namespace std;

class Reverse
{
private:
    int i, n, r, sum = 0;

public:
    int rev(int a)
    {
        n = a;
        for (i = n; i > 0;)
        {
            r = i % 10;
            sum = sum * 10 + r;
            i = i / 10;
        }
        return sum;
    }
};
int main()
{
    Reverse R;
    int x, reverse;
    cout << "Enter a number:";
    cin >> x;
    reverse = R.rev(x);
    cout << "\nReverse of given number is: " << reverse;
    return 0;
}