/* C++ program for show Counter using Overloading unary operator ++  */

#include <iostream>
using namespace std;
class counter
{
    int count;

public:
    counter()
    {
        count = 0;
    }
    int get_count()
    {
        return count;
    }
    void operator++()
    {
        count++;
    }
};

int main()
{
    counter c1, c2;
    cout << "\nC1 =" << c1.get_count();
    cout << "\nC2 =" << c2.get_count();

    ++c1;
    ++c2;
    cout << "\nC1 =" << c1.get_count();
    cout << "\nC2 =" << c2.get_count();
    return 0;
}