#include <iostream>
#include <string.h>

using namespace std;

class Marksheet
{
private:
    string name;
    int roll;
    float word, excel, p_point, win, html, total, percentage;

public:
    void student_info()
    {
        cout << "\nEnter Name Of Student: ";
        getline(cin, name);
        cout << "\nEnter Roll No.: ";
        cin >> roll;
        cout << "Enter Marks Of MS-Word,MS-Excel,MS-PowerPoint,Windows and HTML: ";
        cin >> word >> excel >> p_point >> win >> html;
    }
    void display()
    {
        total = word + excel + p_point + win + html;
        percentage = total / 500 * 100;
        cout << "\nName: " << name;
        cout << "\nRoll NO.: " << roll;
        cout << "\nMarks in MS-Word: " << word;
        cout << "\nMarks in MS-Excel: " << excel;
        cout << "\nMarks in MS-PowerPoint :" << p_point;
        cout << "\nMarks in Windows: " << win;
        cout << "\nMarks in HTML: " << html;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage Obtained: " << percentage;
        if (percentage >= 70)
            cout << "\nGrade A";
        else if (percentage >= 60 && percentage < 70)
            cout << "\nGrade B";
        else if (percentage >= 50 && percentage < 60)
            cout << "\nGrade C";
        else if (percentage >= 40 && percentage < 50)
            cout << "\nGrade D";
        else
            cout << "\nFail";
    }
};
int main()
{
    Marksheet M;
    M.student_info();
    M.display();
    return 0;
}