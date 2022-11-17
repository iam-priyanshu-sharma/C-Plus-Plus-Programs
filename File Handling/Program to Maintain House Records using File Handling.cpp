/*  C++ Program to Maintain House Records using File Handling */

#include <fstream>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int opt;

class housing
{
    int hno, income;
    char name[20], type[20];

public:
    void assign()
    {
        if (income < 15000)
            strcpy(type, "LIG");
        else if (income >= 15000)
            strcpy(type, "MIG");
        else if (income >= 25000)
            strcpy(type, "HIG");
    }

    void input()
    {
        cout << "\n Enter House Number: ";
        cin >> hno;
        cout << "\n House Name: ";
        cin >> name;
        cout << "\n Annual Income: ";
        cin >> income;
        assign();
    }

    void output()
    {
        cout << "House Number: " << hno << "\n"
             << "House Name: " << name << "\n"
             << "Annual                                           Income: " << income << "\n"
             << "Type: " << type;
    }

    int retno()
    {
        return hno;
    }
};

int main()
{
    housing h, h1;
    fstream f;
    int hono;

    while (true)
    {
        cout << "\n 1: Add Record"
             << "\n 2: Modify Record"
             << "\n 3: Display Records"
             << "\n 4: Exit\n"
             << endl;
        cin >> opt;

        if (opt == 1)
        {
            char ch = 'y';
            f.open("C:\\Users\\acer\\Documents\\file4.txt", ios::out | ios::binary | ios::app);
            while (ch == 'y')
            {
                cout << "\n Enter Details: ";
                h.input();
                f.write((char *)&h, sizeof(h));
                cout << "\n Want to Enter More? y/n: " << endl;
                cin >> ch;
            }
            f.close();
        }

        if (opt == 2)
        {
            cout << "\n Enter House No of Record to be modified: ";
            cin >> hono;
            f.open("C:\\Users\\acer\\Documents\\file4.txt", ios::in | ios::out | ios::binary | ios::ate);
            f.seekg(0);

            while (f.read((char *)&h, sizeof(h)))
            {
                if (h.retno() == hono)
                {
                    cout << "\n New Value: ";
                    h1.input();
                    f.seekp(-sizeof(h), ios::cur);
                    f.write((char *)&h1, sizeof(h1));
                }
            }
            f.close();
        }

        if (opt == 3)
        {
            f.open("C:\\Users\\acer\\Documents\\file4.txt", ios::in | ios::binary);
            f.seekg(0);

            while (f.read((char *)&h, sizeof(h)))
                h.output();

            f.close();
        }

        if (opt == 4)
            exit(0);

        cout << "\nPress any key to continue...... ";
    }

    return 0;
}