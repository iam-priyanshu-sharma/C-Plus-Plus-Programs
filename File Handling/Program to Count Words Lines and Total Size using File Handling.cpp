/*  C++ Program to Count Words Lines and Total Size using File Handling  */

/*---------------File4.txt Content------------------------

// Write a C++ Program to Count Words
// Lines and Total Size using File
// Handling. Here’s simple Program to
// Count Words Lines and Total Size using
// File Handling in C++ Programming Language.

--------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "\nText File 1 is opened........\n";
    ifstream fin("C:\\Users\\acer\\Documents\\file4.txt"); // opening text file

    int line = 1, word = 1, size; // will not count first word and last line so initial value is 1
    char ch;

    fin.seekg(0, ios::end); // bring file pointer position to end of file
    size = fin.tellg();     // count number of bytes till current postion for file pointer

    fin.seekg(0, ios::beg); // bring position of file pointer to begining of file

    while (fin)
    {
        fin.get(ch);
        if (ch == ' ' || ch == '\n')
            word++;

        if (ch == '\n')
            line++;
    }

    cout << "\nNo. of Lines = " << line << "\n\nNo. of Words = " << word;
    cout << "\n\nSize of Text File=" << size << "\n";
    fin.close(); // closing file

    return 0;
}