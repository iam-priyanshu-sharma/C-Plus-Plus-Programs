/*  C++ Program to Decrypt Files using File Handling  */

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    char ch, choice, fname[20];
    fstream fps, fpt;
    cout << "Enter file name which you have encrypted :: ";
    cin >> fname;

    fps.open(fname);
    if (!fps)
    {
        cout << "\nError in opening source file..!!";
        cout << "\nPress any key to exit...";

        exit(1);
    }

    fpt.open("C:\\Users\\acer\\Documents\\file5.txt");

    if (!fpt)
    {
        cout << "\nError in opening file5.txt file..!!";
        fps.close();
        cout << "\nPress any key to exit...";

        exit(1);
    }

    while (fpt.eof() == 0)
    {
        fpt >> ch;
        ch = ch - 100;
        fps << ch;
    }

    cout << "\nFile " << fname << " decrypted successfully....!!";
    cout << "\n\nPress any key to exit...\n";
    fps.close();
    fpt.close();
    return 0;
}