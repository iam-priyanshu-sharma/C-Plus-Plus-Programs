/* C++ Program to Perform Simple Addition Function Using Templates  */

#include <iostream>
#include <stdio.h>

using namespace std;

template <class type>
type add(type num1, type num2);

int main()
{
    std::cout << "Please enter integer 1 : ";
    int num1;
    cin >> num1;

    cout << "\nPlease enter integer 2 : ";
    int num2;
    cin >> num2;

    int answer = add(num1, num2);
    cout << "\nThe sum of [ " << num1 << " + " << num2 << " ] = " << answer << "\n";

    getchar();

    return 0;
}
template <class type>
type add(type num1, type num2)
{
    type result = num1 + num2;
    return result;
}