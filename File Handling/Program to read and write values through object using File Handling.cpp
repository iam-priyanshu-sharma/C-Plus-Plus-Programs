/*  C++ program to read and write values through object using File Handling  */

#include <iostream>
#include <fstream>

using namespace std;

// class student to read and write student details
class student
{
private:
    char name[30];
    int age;

public:
    void getData(void)
    {
        cout << "\nEnter name :: ";
        cin.getline(name, 30);
        cout << "\nEnter age :: ";
        cin >> age;
    }

    void showData(void)
    {
        cout << "\nName :: " << name << "\n\nAge :: " << age << endl;
    }
};

int main()
{
    student s;

    ofstream file;

    // open file in write mode
    file.open("C:\\Users\\acer\\Documents\\file4.txt", ios::out);
    if (!file)
    {
        cout << "\nError in creating file......" << endl;
        return 0;
    }
    cout << "\nFile created successfully.........." << endl;

    // write into file
    s.getData();                       // read from user
    file.write((char *)&s, sizeof(s)); // write into file

    file.close(); // close the file
    cout << "\nFile saved and closed succesfully......." << endl;

    // re open file in input mode and read data
    // open file1
    ifstream file1;
    // again open file in read mode
    file1.open("C:\\Users\\acer\\Documents\\file4.txt", ios::in);
    if (!file1)
    {
        cout << "\nError in opening file.......";
        return 0;
    }

    cout << "\nReading data from the text File :: \n";
    // read data from file
    file1.read((char *)&s, sizeof(s));

    // display data on monitor
    s.showData();
    // close the file
    file1.close();

    return 0;
}