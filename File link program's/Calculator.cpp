#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "Mathematical Operations.cpp"

using namespace std;

class Calculator : public Arithmetic_operations
{
public:
    void calculator()
    {
        calc();
    }
    void end()
    {
        cout << "\nPlease Try Again.";
    }
};
int main()
{
    Calculator C;
    C.calculator();
    while (1)
    {
        cout << "\nDo You Want To Continue(Yes / No): ";
        char choice1;
        cin >> choice1;
        cout << endl;
        switch (choice1)
        {
        case 'Yes':
        case 'yes':
        case 'Y':
        case 'y':
            C.calculator();
            break;
        case 'No':
        case 'no':
        case 'N':
        case 'n':
            C.end();
        case 0:
            exit(0);
        default:
            cout << "\nPlease Try Again.";
        }
    }
    return 0;
}
