/*  C++ Program for Student Database using File handling */

#include <iostream>
#include <fstream>
using namespace std;

static int totrec = 0;

int main()
{
    int choice;
    while (1)
    {
        cout << "\nChoose your choice :: \n";
        cout << "1) Add New Record\n";
        cout << "2) Append New records\n";
        cout << "3) Modifying or Append new records\n";
        cout << "4) Display records\n";
        cout << "5) Exit\n";
        cout << "\nEnter your choice :: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            ofstream outfile;
            outfile.open("C:\\Users\\acer\\Documents\\file4.txt", ios::out);
            cout << "\n\nPlease Enter Details :: \n";
            cout << "\nEnter the name :: ";
            char name[20];
            cin >> name;
            outfile << name << endl;
            cout << "\nEnter Age :: ";
            int age;
            cin >> age;
            outfile << age << endl;
            cout << "\nEnter programming language known :: ";
            char lang[25];
            cin >> lang;
            outfile << lang << endl;
            totrec = totrec + 1;
            outfile.close();
        }
        break;

        case 2:
        {
            ofstream outfile;
            outfile.open("C:\\Users\\acer\\Documents\\file4.txt", ios::app);
            cout << "\n\nPlease Enter Details :: \n";
            cout << "\nEnter the name :: ";
            char name[20];
            cin >> name;
            outfile << name << endl;
            cout << "\nEnter Age :: ";
            int age;
            cin >> age;
            outfile << age << endl;
            cout << "\nEnter programming language known :: ";
            char lang[25];
            cin >> lang;
            outfile << lang << endl;
            totrec = totrec + 1;
            outfile.close();
        }
        break;

        case 3:
        {
            ofstream outfile;
            outfile.open("C:\\Users\\acer\\Documents\\file4.txt", ios::ate);
            cout << "\nWant to add new record ::\nEnter y or n ? ";
            char ans;
            cin >> ans;
            if (ans == 'y' || ans == 'Y')
            {
                cout << "\n\nPlease Enter Details :: \n";
                cout << "\nEnter the name :: ";
                char name[20];
                cin >> name;
                outfile << name << endl;
                cout << "\nEnter Age :: ";
                int age;
                cin >> age;
                outfile << age << endl;
                cout << "\nEnter programming language known :: ";
                char lang[25];
                cin >> lang;
                outfile << lang << endl;
                totrec = totrec + 1;
            }
            outfile.close();
        }
        break;

        case 4:
        {
            ifstream infile;
            infile.open("C:\\Users\\acer\\Documents\\file4.txt", ios::in);
            const int size = 80;
            char line[size];
            int counter = totrec;
            while (counter > 0)
            {
                infile.getline(line, size);
                cout << "\n\nNAME     : " << line << endl;
                infile.getline(line, size);
                cout << "AGE      : " << line << endl;
                infile.getline(line, size);
                cout << "LANGUAGE : " << line << endl;
                counter--;
            }
            infile.close();
        }
        break;

        case 5:
            exit(0);

        default:
            cout << "\nInvalid Choice\nTRY AGAIN.......\n";
        }
    }
    return 0;
}