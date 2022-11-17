/*  C++ Program to show Example of Static member variable of template class  */

#include <iostream>

using namespace std;

template <class T>
class XYZ
{
public:
    void putPri();
    static T ipub;

private:
    static T ipri;
};

template <class T>
void XYZ<T>::putPri()
{
    cout << ipri++ << endl;
}

// Static variable initialization:
template <class T>
T XYZ<T>::ipub = 1;
template <class T>
T XYZ<T>::ipri = 1.2;

int main()
{
    XYZ<int> aaa;
    XYZ<float> bbb;

    aaa.putPri();
    cout << aaa.ipub << endl;
    bbb.putPri();
    return 0;
}