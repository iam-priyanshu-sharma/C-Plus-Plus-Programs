#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        cout << "\nIt's a Vowel.";
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << "\nIt's a Vowel.";
    else
        cout << "\nIt's a Consonant.";
    return 0;
}