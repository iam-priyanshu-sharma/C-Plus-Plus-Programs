/*Menu based program for displaying student information and some programs*/
#include <iostream>
using namespace std;

class Information
{
private:
public:
    void menubased()
    {
        int choice;
        string str;
        cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << endl;
        cout << "*  1. STUDENT INFORMATION                     *" << endl;
        cout << "*  2. DEPARTMENT INFORMATION                  *" << endl;
        cout << "*  3. CLASS INFORMATION                       *" << endl;
        cout << "*  4. PROGRAM                                 *" << endl;
        cout << "*     A. TO CHECK A GIVEN NO. IS PRIME OR NOT *" << endl;
        cout << "*     B. TO REVERSE A GIVEN NUMBER            *" << endl;
        cout << "*     C. TO PRINT FIBONACCI SERIES OF A LIMIT *" << endl;
        cout << "*     D. TO PRINT BIGGER VALUE                *" << endl;
        cout << "*     E. TO REVERSE A GIVEN STRING            *" << endl;
        cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << endl;
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n ********** STUDENT INFORMATION **********" << endl;
            cout << "Name:- Priyanshu Sharma " << endl;
            cout << "Class:- B.C.A." << endl;
            cout << "Semester:- 3rd" << endl;
            cout << "Group:- A" << endl;
            cout << "Class Roll No.:- 30" << endl;
            cout << "Exam Roll No.:- 215055" << endl;
            cout << "Registration No.:- 20BAVGCS030" << endl;
            cout << "Contact No.:- 7370856925" << endl;
            break;

        case 2:
            cout << "Department Name:- B.C.A." << endl;
            cout << "Department Co-ordinator:- T.K.Dey" << endl;
            cout << "Department Head:-Sujit Sir" << endl;
            cout << "Department Teacher:- Dr. Navin Kr. Gautam\n \t\t     Dr.Shamshir Ali" << endl;
            cout << "Department Clerk:- Chintu";
            break;

        case 3:
            cout << "Total No. of student in your class:- 109 " << endl;
            cout << "Total No. of subject:- 6               " << endl;
            cout << "Name of Subject:-                     " << endl
                 << "                                    " << endl
                 << "                                    " << endl
                 << "                                    " << endl
                 << "                                    " << endl
                 << "                                    " << endl;
            break;

        case 4:
            int n;
            int len;
            char choice1;
            cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << endl;
            cout << "* 4. PROGRAM                                  *" << endl;
            cout << "*     A. TO CHECK A GIVEN NO. IS PRIME OR NOT *" << endl;
            cout << "*     B. TO REVERSE A GIVEN NUMBER            *" << endl;
            cout << "*     C. TO PRINT FIBONACCI SERIES OF A LIMIT *" << endl;
            cout << "*     D. TO PRINT BIGGER VALUE                *" << endl;
            cout << "*     E. TO REVERSE A GIVEN STRING            *" << endl;
            cout << "* * * * * * * * * * * * * * * * * * * * * * * *" << endl;
            cout << "\n Enter your choice" << endl;
            cin >> choice1;
            switch (choice1)
            {
            case 'A': /*check no is prime or not*/
            case 'a':
                int num, i;
                cout << "Enter your number: " << endl;
                cin >> num;
                for (i = 2; i < num; i++)
                {
                    if (num % i == 0)
                        break;
                }
                if (i == num)
                    cout << num << " is prime no." << endl;
                else
                    cout << num << " is not prime no." << endl;
                break;
            case 'B': /* To reverse a given number*/
            case 'b':
                int a, c;
                i = 0;
                cout << "Input a number: " << endl;
                cin >> a;
                while (a > 0)
                {
                    c = a % 10;
                    i = (i * 10) + c;
                    a = a / 10;
                }
                cout << "The reverse of input no. is " << i << endl;
                break;
            case 'C': /*To print fibonacci series of a limit*/
            case 'c':
                int range, b;
                b = 1;
                a = 0;
                i = 0;

                cout << "Input range ";
                cin >> range;
                while (i < range)
                {
                    c = a + b;
                    cout << c << "\t";
                    a = b;
                    b = c;
                    i = c + a;
                }
                break;
            case 'D': /* To print bigger value*/
            case 'd':
                cout << "Input two number: " << endl;
                cin >> a >> b;
                if (a > b)
                    cout << a << " is greater than " << b << endl;
                else
                    cout << b << " is greater than " << a << endl;
                break;
            case 'E': /*To reverse a given string */
            case 'e':
                cout << "Input the string: " << endl;
                cin >> str;
                len = str.length();
                n = len;
                while (n--)
                    cout << str[n];
                break;
            default:
                cout << "Invalid choice" << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    void end()
    {
        cout << "Code is written by SANKET KUMAR /n Thank you. \n Bye Bye..." << endl;
        //  return 0;
    }
};
int main()
{
    Information C;
    C.menubased();
    while (1)
    {
        cout << endl
             << "DO YOU WANT TO CONTINUE (YES / NO)" << endl;
        char choice1;
        cin >> choice1;
        switch (choice1)
        {
        case 'Y':
        case 'y': // clrscr();
            C.menubased();
            break;
        case 'N':
        case 'n':
            C.end();
        case 0:
            exit(0);
        default:
            cout << "\n Try again........" << endl;
        }
    }
    return 0;
}

/*
OUTPUT:
* * * * * * * * * * * * * * * * * * * * * * * *
*  1. STUDENT INFORMATION                     *
*  2. DEPARTMENT INFORMATION                  *
*  3. CLASS INFORMATION                       *
*  4. PROGRAM                                 *
*     A. TO CHECK A GIVEN NO. IS PRIME OR NOT *
*     B. TO REVERSE A GIVEN NUMBER            *
*     C. TO PRINT FIBONACCI SERIES OF A LIMIT *
*     D. TO PRINT BIGGER VALUE                *
*     E. TO REVERSE A GIVEN STRING            *
* * * * * * * * * * * * * * * * * * * * * * * *
ENTER YOUR CHOICE:
4
* * * * * * * * * * * * * * * * * * * * * * * *
* 4. PROGRAM                                  *
*     A. TO CHECK A GIVEN NO. IS PRIME OR NOT *
*     B. TO REVERSE A GIVEN NUMBER            *
*     C. TO PRINT FIBONACCI SERIES OF A LIMIT *
*     D. TO PRINT BIGGER VALUE                *
*     E. TO REVERSE A GIVEN STRING            *
* * * * * * * * * * * * * * * * * * * * * * * *

 Enter your choice
B
Input a number:
123
The reverse of input no. is 321

DO YOU WANT TO CONTINUE (YES / NO)
y
* * * * * * * * * * * * * * * * * * * * * * * *
*  1. STUDENT INFORMATION                     *
*  2. DEPARTMENT INFORMATION                  *
*  3. CLASS INFORMATION                       *
*  4. PROGRAM                                 *
*     A. TO CHECK A GIVEN NO. IS PRIME OR NOT *
*     B. TO REVERSE A GIVEN NUMBER            *
*     C. TO PRINT FIBONACCI SERIES OF A LIMIT *
*     D. TO PRINT BIGGER VALUE                *
*     E. TO REVERSE A GIVEN STRING            *
* * * * * * * * * * * * * * * * * * * * * * * *
ENTER YOUR CHOICE:
4
* * * * * * * * * * * * * * * * * * * * * * * *
* 4. PROGRAM                                  *
*     A. TO CHECK A GIVEN NO. IS PRIME OR NOT *
*     B. TO REVERSE A GIVEN NUMBER            *
*     C. TO PRINT FIBONACCI SERIES OF A LIMIT *
*     D. TO PRINT BIGGER VALUE                *
*     E. TO REVERSE A GIVEN STRING            *
* * * * * * * * * * * * * * * * * * * * * * * *

 Enter your choice
b
Input a number:
567
The reverse of input no. is 765

DO YOU WANT TO CONTINUE (YES / NO)
n
Thank you.
 Bye Bye...
*/
