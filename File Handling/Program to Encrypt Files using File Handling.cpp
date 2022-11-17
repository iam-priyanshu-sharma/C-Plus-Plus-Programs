/*  C++ Program to Encrypt Files using File Handling  */

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{

    char fname[20], ch, choice;
    fstream fps, fpt;
    cout << "Enter file name to encrypt :: ";
    cin >> fname;

    fps.open(fname);

    if (!fps)
    {
        cout << "\nError in opening file..!!";
        cout << "\nPress any key to exit...";

        exit(1);
    }

    fpt.open("C:\\Users\\acer\\Documents\\file5.txt");
    if (!fpt)
    {
        cout << "\nError in creating file5.txt file..!!";
        fps.close();
        cout << "\nPress any key to exit...";

        exit(2);
    }
    while (fps.eof() == 0)
    {
        fps >> ch;
        ch = ch + 100;
        fpt << ch;
    }

    fps.close();
    fpt.close();
    fps.open(fname);
    if (!fps)
    {
        cout << "\nError in opening source file..!!";
        cout << "\nPress any key to exit...";

        exit(3);
    }
    fpt.open("C:\\Users\\acer\\Documents\\file5.txt");
    if (!fpt)
    {
        cout << "\nError in opening temp.txt file...!!";
        fps.close();
        cout << "\nPress any key to exit...";

        exit(4);
    }
    while (fpt.eof() == 0)
    {
        fpt >> ch;
        fps << ch;
    }
    cout << "\nFile " << fname << " encrypted successfully..!!";
    cout << "\n\nPress any key to exit...";
    fps.close();
    fpt.close();
    return 0;
}