#include <iostream>
#include <conio.h>
class Table
{
private:
    int i, a;

public:
    void input()
    {
        std::cout << "Enter a no.:";
        std::cin >> a;
    }

    void display()
    {
        int b;
        for (i = 1; i <= 10; i++)
        {
            b = a * i;
            std::cout << a << " * " << i << " = " << b << "\n";
        }
    }
};
int main()
{
    Table a;
    a.input();
    a.display();
    return 0;
}
