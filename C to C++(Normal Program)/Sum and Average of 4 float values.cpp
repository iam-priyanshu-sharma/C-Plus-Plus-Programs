#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, sum, avg;
    cout << "\nEnter 4 float values:";
    cin >> a >> b >> c >> d;
    sum = a + b + c + d;
    avg = sum / 4.0;
    cout << "\nSum=" << sum << endl
         << "Average=" << avg;
    return 0;
}