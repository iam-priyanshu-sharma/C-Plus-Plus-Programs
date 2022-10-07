#include <iostream>

using namespace std;

int main()
{
    int n, sq, cube;
    cout << "Enter a number:";
    cin >> n;
    sq = n * n;
    cube = n * n * n;
    cout << "\nSquare of given number is " << sq << endl
         << "Cube of given number is " << cube;
    return 0;
}