/*  C++ Program to Merge Two Files into a Single file  */

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    ifstream ifiles1, ifiles2;
    ofstream ifilet;

    char ch, fname1[100], fname2[100], fname3[100];

    cout << "Enter first file name :: ";
    cin >> fname1;
    cout << "\nEnter second file name :: ";
    cin >> fname2;
    cout << "\nEnter third name of file :: ";
    cin >> fname3;

    ifiles1.open(fname1);
    ifiles2.open(fname2);

    if (!ifiles1 || !ifiles2)
    {
        perror("\nError Message in file1111 ");
        cout << "\nPress any key to exit...\n";

        exit(EXIT_FAILURE);
    }

    ifilet.open(fname3);

    if (!ifilet)
    {
        perror("\nError Message ");
        cout << "\nPress any key to exit...\n";

        exit(EXIT_FAILURE);
    }

    while (ifiles1.eof() == 0)
    {
        ifiles1 >> ch;
        ifilet << ch;
    }

    while (ifiles2.eof() == 0)
    {
        ifiles2 >> ch;
        ifilet << ch;
    }

    cout << "\nThe two files were merged into " << fname3 << " file successfully....!!\n";

    ifiles1.close();
    ifiles2.close();
    ifilet.close();

    return 0;
}