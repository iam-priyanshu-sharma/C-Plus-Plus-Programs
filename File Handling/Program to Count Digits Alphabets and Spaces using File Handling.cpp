/*  C++ Program to Count Digits Alphabets and Spaces using File Handling  */

/*--------------file4.txt Content------------------

1 Write a C++ Program to Count Digits,
2 Alphabets and Spaces using File
3 Handling. Here’s simple Program to
4 Count Digits, Alphabets and Spaces in
5 a text file in C++ Programming Language.

/--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream fin("C:\\Users\\acer\\Documents\\file4.txt");
    char ch;
    int i, a = 0, s = 0, d = 0;

    while (fin)
    {
        fin.get(ch);
        i = ch;
        if (i > 63 && i < 91 || i > 96 && i < 123)
            a++;
        else if (ch == ' ')
            s++;
        else if (i > 47 && i < 58)
            d++;
    }

    cout << "\nNo. of Alphabets :: " << a << "\n";
    cout << "\nNo. Of Digits :: " << d << "\n";
    cout << "\nNo. Of White Spaces :: " << s << "\n";

    return 0;
}