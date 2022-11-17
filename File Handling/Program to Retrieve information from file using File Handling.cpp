/*  C++ Program to Retrieve information from file using File Handling  */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    char fname[100];
    char rec[100];

    cout << "Enter file name :: ";
    cin >> fname;

    cout << "\nThe file contains information is shown below :: \n\n";

    fin.open(fname, ios::in);
    fin.get(rec, 100);
    cout << rec;

    fin.close();

    cout << "\n";
    return 0;
}