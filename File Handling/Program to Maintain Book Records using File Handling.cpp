/*  C++ Program to Maintain Book Records using File Handling  */

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

int menu();
class Book
{
private:
    int bookid;
    char title[20];
    float price;

protected:
    int allotbookid();
    void showheader();

public:
    void getbook();
    void showbook();
    void addbook();
    void viewbook();
    void searchbook();
    void deletebook();
    void modifybook();
};

int Book::allotbookid()
{
    ifstream fin;
    Book temp;
    int id = 0;
    fin.open("C:\\Users\\acer\\Documents\\books.txt", ios::in | ios::binary);
    if (!fin)
        return (id + 1);
    else
    {
        fin.read((char *)&temp, sizeof(temp));
        while (!fin.eof())
        {
            id = temp.bookid;
            fin.read((char *)&temp, sizeof(temp));
        }
        id++;
        return (id);
    }
}

void Book::showheader()
{
    cout << left;
    cout << "\n"
         << setw(10) << "BOOK ID" << setw(10) << "Price" << setw(10) << "Title\n";
}
void Book::getbook()
{
    cout << "Enter Book Title: ";
    fflush(stdin);
    gets(title);
    cout << "Price of Book: ";
    cin >> price;
    bookid = allotbookid();
}
void Book::showbook()
{
    cout << left;
    cout << "\n"
         << setw(10) << bookid << setw(10) << price << setw(10) << title;
}
void Book::addbook()
{
    ofstream fout;
    fout.open("C:\\Users\\acer\\Documents\\books.txt", ios::out | ios::app | ios::binary);
    if (!fout)
        cout << "File can not open";
    else
        fout.write((char *)this, sizeof(*this));
    fout.close();
}
void Book::viewbook()
{
    ifstream fin;
    fin.open("C:\\Users\\acer\\Documents\\books.txt", ios::in | ios::binary);
    if (!fin)
        cout << "File not found";
    else
    {
        showheader();
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            showbook();
            fin.read((char *)this, sizeof(*this));
        }
    }
    fin.close();
}
void Book::searchbook()
{
    ifstream fin;
    char str[20];
    fin.open("C:\\Users\\acer\\Documents\\books.txt", ios::in | ios::binary);
    cout << "Enter the name of book to search:";
    fflush(stdin);
    gets(str);
    if (!fin)
        cout << "File not found";
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {

            if (!strcmp(this->title, str))
            {
                showheader();
                showbook();
                break;
            }
            fin.read((char *)this, sizeof(*this));
        }
        if (fin.eof())
            cout << "\nRecord not found";
    }
    fin.close();
}
void Book::modifybook()
{
    int id, r = 0;
    fstream file;
    file.open("C:\\Users\\acer\\Documents\\books.txt", ios::in | ios::out | ios::ate | ios::binary);
    cout << "\nEnter record number to modify (bookid): ";
    cin >> id;
    file.seekg(0);
    if (!file)
        cout << "File not found";
    else
    {
        file.read((char *)this, sizeof(*this));

        while (!file.eof())
        {
            r++;
            if (bookid == id)
            {
                showheader();
                showbook();
                cout << "\nRe-enter book details:\n";
                cout << "Enter book title:";
                fflush(stdin);
                gets(title);
                cout << "Enter book price";
                cin >> price;
                file.seekp((r - 1) * sizeof(Book), ios::beg);
                file.write((char *)this, sizeof(*this));
                break;
            }
            file.read((char *)this, sizeof(*this));
        }
        if (file.eof())
            cout << "Record not found";
    }
    file.close();
}
void Book::deletebook()
{
    ifstream fin;
    ofstream fout;
    int id;
    char x;
    fin.open("C:\\Users\\acer\\Documents\\books.txt", ios::in | ios::binary);
    fout.open("C:\\Users\\acer\\Documents\\tempbooks.txt", ios::out | ios::app | ios::binary);
    cout << "Enter bookid to delete record";
    cin >> id;
    if (!fin)
        cout << "File not found";
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if (this->bookid == id)
            {
                cout << "Record you want to delete is:\n\n";
                showheader();
                showbook();
                cout << "\nAre you sure you want to delete this record(y/n): ";
                fflush(stdin);
                cin >> x;
                if (x == 'n')
                    fout.write((char *)this, sizeof(*this));
                else
                    cout << "\nRecord is deleted";
            }
            else
                fout.write((char *)this, sizeof(*this));
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
        fout.close();

        system("erase C:\\Users\\acer\\Documents\\books.txt");
        system("rename C:\\Users\\acer\\Documents\\tempbooks.txt C:\\Users\\acer\\Documents\\books.txt");
    }
}
int menu()
{
    system("cls");
    cout << "\n1. Add new book";
    cout << "\n2. View all books";
    cout << "\n3. Search book";
    cout << "\n4. modify book";
    cout << "\n5. delete book";
    cout << "\n6. Exit";
    cout << "\n\nEnter your choice";
    int ch;
    cin >> ch;
    return (ch);
}
int main()
{
    Book b;
    int ch;
    while (1)
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            b.getbook();
            b.addbook();
            break;
        case 2:
            b.viewbook();
            break;
        case 3:
            b.searchbook();
            break;
        case 4:
            b.modifybook();
            break;
        case 5:
            b.deletebook();
            break;
        case 6:
            exit(0);
        default:
            cout << "Enter Valid choice";
        }
    }

    return 0;
}