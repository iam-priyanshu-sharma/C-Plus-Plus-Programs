/*  C++ Program of Manipulation of file pointers in File Handling  */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fp;
    char buf[100];
    int pos;

    // open a file in write mode with 'ate' flag
    fp.open("C:\\Users\\acer\\Documents\\file4.txt", ios ::out | ios ::ate);
    cout << "\nWriting to a file ... " << endl;
    fp << "This is a one line" << endl; // write a line to a file
    fp << "This is a another line\n"
       << endl; // write another file

    pos = fp.tellp();
    cout << "\nCurrent position of put pointer : " << pos << endl;

    // move the pointer 10 bytes backward from current position
    fp.seekp(-10, ios ::cur);
    fp << endl
       << "Writing at a random location  ";

    // move the pointer 7 bytes forward from beginning of the file
    fp.seekp(7, ios ::beg);
    fp << " Hello World  ";
    fp.close(); // file write complete
    cout << "\nWriting Complete .... " << endl;

    // open a file in read mode with 'ate' flag
    fp.open("C:\\Users\\acer\\Documents\\file4.txt", ios ::in | ios ::ate);
    cout << "\nReading from the file ... \n"
         << endl;

    fp.seekg(0); // move the get pointer to the beginning of the file
    // read all contents till the end of file

    while (!fp.eof())
    {
        fp.getline(buf, 100);
        cout << buf << endl;
    }

    pos = fp.tellg();
    cout << "\nCurrent Position of get pointer : " << pos << endl;

    return 0;
}