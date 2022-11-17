/* C++ Program to Count Occurrence of Word using File Handling  */

/*---------------file4.txt Content--------------

/ This C++ program will read  a word from user
/ and then count its total occurrence in a text
/ file “file4.txt”. Make sure you have already
/ create this text file and have some text in it.
/ Place this file in the same directory where your
/ program source file is present.

/---------------------------------------------*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Opening the text file............\n ";
    ifstream fin("C:\\Users\\acer\\Documents\\file4.txt"); // opening text file
    cout << "\nFile opened successfully.............\n";

    int count = 0;
    char ch[20], c[20];

    cout << "\nEnter any word which u want to count :: ";
    cin >> c;

    while (fin)
    {
        fin >> ch;
        if (strcmp(ch, c) == 0)
            count++;
    }

    cout << "\nOccurrence of word [ " << c << " ] = " << count << "\n";
    fin.close(); // closing file

    return 0;
}
