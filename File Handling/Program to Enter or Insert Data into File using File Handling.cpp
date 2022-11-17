/*  C++ Program to Enter or Insert Data into File using File Handling */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    char fname[100];
    char rec[100];

    cout << "Enter file name :: ";
    cin >> fname;

    fout.open(fname, ios::out);

    cout << "\nEnter any word to insert :: ";
    cin >> rec;

    fout << rec;
    cout << "\nData inserted successfully..!!\n";

    fout.close();

    return 0;
}